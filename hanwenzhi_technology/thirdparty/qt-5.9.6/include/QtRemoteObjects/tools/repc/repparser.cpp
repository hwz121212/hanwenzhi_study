
#line 277 "../../src/repparser/parser.g"

#include "repparser.h"

#include <QDebug>
#include <QTextStream>

// for normalizeTypeInternal
#include <private/qmetaobject_p.h>
#include <private/qmetaobject_moc_p.h>

// Code copied from moc.cpp
// We cannot depend on QMetaObject::normalizedSignature,
// since repc is linked against Qt5Bootstrap (which doesn't offer QMetaObject) when cross-compiling
// Thus, just use internal API which is exported in private headers, as moc does
static QByteArray normalizeType(const QByteArray &ba, bool fixScope = false)
{
    const char *s = ba.constData();
    int len = ba.size();
    char stackbuf[64];
    char *buf = (len >= 64 ? new char[len + 1] : stackbuf);
    char *d = buf;
    char last = 0;
    while (*s && is_space(*s))
        s++;
    while (*s) {
        while (*s && !is_space(*s))
            last = *d++ = *s++;
        while (*s && is_space(*s))
            s++;
        if (*s && ((is_ident_char(*s) && is_ident_char(last))
                   || ((*s == ':') && (last == '<')))) {
            last = *d++ = ' ';
        }
    }
    *d = '\0';
    QByteArray result = normalizeTypeInternal(buf, d, fixScope);
    if (buf != stackbuf)
        delete [] buf;
    return result;
}

ASTProperty::ASTProperty()
    : modifier(ReadPush), persisted(false)
{
}

ASTProperty::ASTProperty(const QString &type, const QString &name, const QString &defaultValue, Modifier modifier, bool persisted)
    : type(type), name(name), defaultValue(defaultValue), modifier(modifier), persisted(persisted)
{
}

QString ASTDeclaration::asString(bool withName) const
{
    QString str;
    if (variableType & ASTDeclaration::Constant)
        str += QLatin1String("const ");
    str += type;
    if (variableType & ASTDeclaration::Reference)
        str += QLatin1String(" &");
    if (withName)
        str += QString::fromLatin1(" %1").arg(name);
    return str;
}

ASTFunction::ASTFunction(const QString &name, const QString &returnType)
    : returnType(returnType), name(name)
{
}

QString ASTFunction::paramsAsString(ParamsAsStringFormat format) const
{
    QString str;
    foreach (const ASTDeclaration &param, params) {
        QString paramStr = param.asString(format != Normalized);
        if (format == Normalized) {
            paramStr = QString::fromLatin1(::normalizeType(paramStr.toLatin1().constData()));
            str += paramStr + QLatin1Char(',');
        } else {
            str += paramStr + QStringLiteral(", ");
        }
    }

    str.chop((format == Normalized ? 1 : 2)); // chop trailing ',' or ', '

    return str;
}

QStringList ASTFunction::paramNames() const
{
    QStringList names;
    foreach (const ASTDeclaration &param, params) {
        names << param.name;
    }
    return names;
}

ASTEnum::ASTEnum(const QString &name)
    : name(name), isSigned(false), max(0)
{
}

ASTModel::ASTModel(const QString &name)
    : name(name)
{
}

ASTClass::ASTClass(const QString &name)
    : name(name), hasPersisted(false)
{
}

bool ASTClass::isValid() const
{
    return !name.isEmpty();
}

RepParser::RepParser(QIODevice &outputDevice)
    : QRegexParser(), m_astEnumValue(-1)
{
    setBufferFromDevice(&outputDevice);
}

void RepParser::reset()
{
    m_ast = AST();
    m_astClass = ASTClass();
    m_astEnum = ASTEnum();
    //setDebug();
}

bool RepParser::parseModifierFlag(const QString &flag, ASTProperty::Modifier &modifier, bool &persisted)
{
    QRegExp regex(QStringLiteral("\\s*,\\s*"));
    QStringList flags = flag.split(regex);
    persisted = flags.removeAll(QStringLiteral("PERSISTED")) > 0;
    if (flags.length() == 0)
        return true;
    if (flags.length() > 1) {
        // Only valid combination is "READONLY" and "CONSTANT"
        if (flags.length() == 2 && flags.contains(QStringLiteral("READONLY")) &&
            flags.contains(QStringLiteral("CONSTANT"))) {
            // If we have READONLY and CONSTANT that means CONSTANT
            modifier = ASTProperty::Constant;
            return true;
        } else {
            setErrorString(QStringLiteral("Invalid property declaration: combination not allowed (%1)").arg(flag));
            return false;
        }
    }
    const QString &f = flags.at(0);
    if (f == QStringLiteral("READONLY"))
        modifier = ASTProperty::ReadOnly;
    else if (f == QStringLiteral("CONSTANT"))
        modifier = ASTProperty::Constant;
    else if (f == QStringLiteral("READPUSH"))
        modifier = ASTProperty::ReadPush;
    else if (f == QStringLiteral("READWRITE"))
        modifier = ASTProperty::ReadWrite;
    else {
        setErrorString(QStringLiteral("Invalid property declaration: flag %1 is unknown").arg(flag));
        return false;
    }

    return true;
}

bool RepParser::parseProperty(ASTClass &astClass, const QString &propertyDeclaration)
{
    QString input = propertyDeclaration.trimmed();

    QString propertyType;
    QString propertyName;
    QString propertyDefaultValue;
    ASTProperty::Modifier propertyModifier = ASTProperty::ReadPush;
    bool persisted = false;

    // parse type declaration which could be a nested template as well
    bool inTemplate = false;
    int templateDepth = 0;
    int nameIndex = -1;

    for (int i = 0; i < input.size(); ++i) {
        const QChar inputChar(input.at(i));
        if (inputChar == QLatin1Char('<')) {
            propertyType += inputChar;
            inTemplate = true;
            ++templateDepth;
        } else if (inputChar == QLatin1Char('>')) {
            propertyType += inputChar;
            --templateDepth;
            if (templateDepth == 0)
                inTemplate = false;
        } else if (inputChar == QLatin1Char(' ')) {
            if (!inTemplate) {
                nameIndex = i;
                break;
            } else {
                propertyType += inputChar;
            }
        } else {
            propertyType += inputChar;
        }
    }

    if (nameIndex == -1) {
        setErrorString(QStringLiteral("PROP: Invalid property declaration: %1").arg(propertyDeclaration));
        return false;
    }

    // parse the name of the property
    input = input.mid(nameIndex).trimmed();

    const int equalSignIndex = input.indexOf(QLatin1Char('='));
    if (equalSignIndex != -1) { // we have a default value
        propertyName = input.left(equalSignIndex).trimmed();

        input = input.mid(equalSignIndex + 1).trimmed();
        const int whitespaceIndex = input.indexOf(QLatin1Char(' '));
        if (whitespaceIndex == -1) { // no flag given
            propertyDefaultValue = input;
            propertyModifier = ASTProperty::ReadPush;
        } else { // flag given
            propertyDefaultValue = input.left(whitespaceIndex).trimmed();

            const QString flag = input.mid(whitespaceIndex + 1).trimmed();
            if (!parseModifierFlag(flag, propertyModifier, persisted))
                return false;
        }
    } else { // there is no default value
        const int whitespaceIndex = input.indexOf(QLatin1Char(' '));
        if (whitespaceIndex == -1) { // no flag given
            propertyName = input;
            propertyModifier = ASTProperty::ReadPush;
        } else { // flag given
            propertyName = input.left(whitespaceIndex).trimmed();

            const QString flag = input.mid(whitespaceIndex + 1).trimmed();
            if (!parseModifierFlag(flag, propertyModifier, persisted))
                return false;
        }
    }

    astClass.properties << ASTProperty(propertyType, propertyName, propertyDefaultValue, propertyModifier, persisted);
    if (persisted)
        astClass.hasPersisted = true;
    return true;
}

bool RepParser::parseRoles(ASTModel &astModel, const QString &modelRoles)
{
    const QString input = modelRoles.trimmed();

    if (input.isEmpty())
        return true;

    const QStringList roleStrings = input.split(QChar(QLatin1Char(',')));
    for (auto role : roleStrings)
        astModel.roles << ASTModelRole(role.trimmed());
    return true;
}

AST RepParser::ast() const
{
    return m_ast;
}

void RepParser::TypeParser::parseArguments(const QString &arguments)
{
    int templateDepth = 0;
    bool inTemplate = false;
    bool inVariable = false;
    QString propertyType;
    QString variableName;
    ASTDeclaration::VariableTypes variableType = ASTDeclaration::None;
    int variableNameIndex = 0;
    for (int i = 0; i < arguments.size(); ++i) {
        const QChar inputChar(arguments.at(i));
        if (inputChar == QLatin1Char('<')) {
            propertyType += inputChar;
            inTemplate = true;
            ++templateDepth;
        } else if (inputChar == QLatin1Char('>')) {
            propertyType += inputChar;
            --templateDepth;
            if (templateDepth == 0)
                inTemplate = false;
        } else if (inputChar == QLatin1Char(' ')) {
            if (inTemplate)
                propertyType += inputChar;
            else if (!propertyType.isEmpty()) {
                if (propertyType == QLatin1String("const")) {
                    propertyType.clear();
                    variableType |= ASTDeclaration::Constant;
                } else {
                    inVariable = true;
                }
            }
        } else if (inputChar == QLatin1Char('&')) {
            variableType |= ASTDeclaration::Reference;
        } else if (inputChar == QLatin1Char(',')) {
            if (!inTemplate) {
                RepParser::TypeParser::generateFunctionParameter(variableName, propertyType, variableNameIndex, variableType);
                propertyType.clear();
                variableName.clear();
                variableType = ASTDeclaration::None;
                inVariable = false;
            } else {
                propertyType += inputChar;
            }
        } else {
            if (inVariable)
                variableName += inputChar;
            else
                propertyType += inputChar;
        }
    }
    if (!propertyType.isEmpty()) {
        RepParser::TypeParser::generateFunctionParameter(variableName, propertyType, variableNameIndex, variableType);
    }
}

void RepParser::TypeParser::generateFunctionParameter(QString variableName, const QString &propertyType, int &variableNameIndex, ASTDeclaration::VariableTypes variableType)
{
    if (!variableName.isEmpty())
        variableName = variableName.trimmed();
    else
        variableName = QString::fromLatin1("__repc_variable_%1").arg(++variableNameIndex);
    arguments.append(ASTDeclaration(propertyType, variableName, variableType));
}

void RepParser::TypeParser::appendParams(ASTFunction &slot)
{
    Q_FOREACH (const ASTDeclaration &arg, arguments) {
        slot.params << arg;
    }
}

void RepParser::TypeParser::appendPods(POD &pods)
{
    Q_FOREACH (const ASTDeclaration &arg, arguments) {
        PODAttribute attr;
        attr.type = arg.type;
        attr.name = arg.name;
        pods.attributes.append(qMove(attr));
    }
}

bool RepParser::consumeRule(int ruleno)
{
    if (isDebug()) {
        qDebug() << "consumeRule:" << ruleno << spell[rule_info[rule_index[ruleno]]];
    }
    switch (ruleno) {

#line 646 "../../src/repparser/parser.g"

    case 20:
    {
        m_ast.enums.append(m_astEnum);
    }
    break;

#line 657 "../../src/repparser/parser.g"

    case 23:
    {
        m_ast.preprocessorDirectives.append(captured().value(QStringLiteral("preprocessor_directive")));
    }
    break;

#line 666 "../../src/repparser/parser.g"

    case 24:
    {
        POD pod;
        pod.name = captured().value(QStringLiteral("name")).trimmed();

        const QString argString = captured().value(QLatin1String("types")).trimmed();
        if (argString.isEmpty()) {
            qWarning() << "[repc] - Ignoring POD with no data members.  POD name: " << qPrintable(pod.name);
            return true;
        }

        RepParser::TypeParser parseType;
        parseType.parseArguments(argString);
        parseType.appendPods(pod);
        m_ast.pods.append(pod);
    }
    break;

#line 687 "../../src/repparser/parser.g"

    case 25:

#line 691 "../../src/repparser/parser.g"

    case 26:

#line 695 "../../src/repparser/parser.g"

    case 27:
    {
        m_ast.classes.append(m_astClass);
    }
    break;

#line 706 "../../src/repparser/parser.g"

    case 34:
    {
        m_astClass.enums.append(m_astEnum);
    }
    break;

#line 727 "../../src/repparser/parser.g"

    case 63:
    {
        const QString name = captured().value(QLatin1String("name"));

        // new Class declaration
        m_astEnum = ASTEnum(name);
        m_astEnumValue = -1;
    }
    break;

#line 742 "../../src/repparser/parser.g"

    case 66:
    {
        ASTEnumParam param;
        param.name = captured().value(QStringLiteral("name")).trimmed();
        QString value = captured().value(QStringLiteral("value"));
        value.remove(QLatin1Char('='));
        value = value.trimmed();
        if (value.isEmpty())
            param.value = ++m_astEnumValue;
        else if (value.startsWith(QStringLiteral("0x"), Qt::CaseInsensitive))
            param.value = m_astEnumValue = value.toInt(0,16);
        else
            param.value = m_astEnumValue = value.toInt();
        if (param.value < 0) {
            m_astEnum.isSigned = true;
            if (m_astEnum.max < -param.value)
                m_astEnum.max = -param.value;
        } else if (m_astEnum.max < param.value)
            m_astEnum.max = param.value;
        m_astEnum.params << param;
    }
    break;

#line 768 "../../src/repparser/parser.g"

    case 67:
    {
        const QString args = captured().value(QLatin1String("args"));
        if (!parseProperty(m_astClass, args))
            return false;
    }
    break;

#line 779 "../../src/repparser/parser.g"

    case 68:
    {
        ASTFunction signal;
        signal.name = captured().value(QLatin1String("name")).trimmed();

        const QString argString = captured().value(QLatin1String("args")).trimmed();
        RepParser::TypeParser parseType;
        parseType.parseArguments(argString);
        parseType.appendParams(signal);
        m_astClass.signalsList << signal;
    }
    break;

#line 795 "../../src/repparser/parser.g"

    case 69:
    {
        QString returnTypeAndName = captured().value(QLatin1String("type")).trimmed();
        const QString argString = captured().value(QLatin1String("args")).trimmed();

        // compat code with old SLOT declaration: "SLOT(func(...))"
        const bool hasWhitespace = returnTypeAndName.indexOf(QStringLiteral(" ")) != -1;
        if (!hasWhitespace) {
            qWarning() << "[repc] - Adding 'void' for unspecified return type on" << qPrintable(returnTypeAndName);
            returnTypeAndName.prepend(QStringLiteral("void "));
        }

        const int startOfFunctionName = returnTypeAndName.lastIndexOf(QStringLiteral(" ")) + 1;

        ASTFunction slot;
        slot.returnType = returnTypeAndName.mid(0, startOfFunctionName-1);
        slot.name = returnTypeAndName.mid(startOfFunctionName);

        RepParser::TypeParser parseType;
        parseType.parseArguments(argString);
        parseType.appendParams(slot);
        m_astClass.slotsList << slot;
    }
    break;

#line 823 "../../src/repparser/parser.g"

    case 70:
    {
        ASTModel model;
        model.name = captured().value(QLatin1String("name")).trimmed();
        const QString argString = captured().value(QLatin1String("args")).trimmed();

        if (!parseRoles(model, argString))
            return false;

        m_astClass.models << model;
    }
    break;

#line 839 "../../src/repparser/parser.g"

    case 71:

#line 843 "../../src/repparser/parser.g"

    case 72:
    {
        const QString name = captured().value(QLatin1String("name"));

        // new Class declaration
        m_astClass = ASTClass(name);
    }
    break;

#line 855 "../../src/repparser/parser.g"

    case 73:
    {
        const QString name = captured().value(QLatin1String("name"));

        m_ast.enumUses.append(name);
    }
    break;

#line 867 "../../src/repparser/parser.g"

    case 74:
    {
        setErrorString(QStringLiteral("class: Cannot be nested"));
        return false;
    }
    break;

#line 876 "../../src/repparser/parser.g"

    case 75:
    {
        setErrorString(QStringLiteral("POD: Can only be used in global scope"));
        return false;
    }
    break;

#line 885 "../../src/repparser/parser.g"

    case 76:
    {
        setErrorString(QStringLiteral("USE_ENUM: Can only be used in global scope"));
        return false;
    }
    break;

#line 894 "../../src/repparser/parser.g"

    case 77:
    {
        setErrorString(QStringLiteral("SIGNAL: Can only be used in class scope"));
        return false;
    }
    break;

#line 903 "../../src/repparser/parser.g"

    case 78:
    {
        setErrorString(QStringLiteral("SLOT: Can only be used in class scope"));
        return false;
    }
    break;

#line 912 "../../src/repparser/parser.g"

    case 79:
    {
        setErrorString(QStringLiteral("PROP: Can only be used in class scope"));
        return false;
    }
    break;

#line 921 "../../src/repparser/parser.g"

    case 80:
    {
        setErrorString(QStringLiteral("MODEL: Can only be used in class scope"));
        return false;
    }
    break;

#line 930 "../../src/repparser/parser.g"

    } // switch
    return true;
}
