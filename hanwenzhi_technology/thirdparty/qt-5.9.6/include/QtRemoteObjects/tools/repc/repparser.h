
#line 64 "../../src/repparser/parser.g"

#ifndef REPPARSER_H
#define REPPARSER_H

#include <rep_grammar_p.h>
#include <qregexparser.h>
#include <QStringList>
#include <QVector>
#include <QRegExp>

QT_BEGIN_NAMESPACE
class QIODevice;

/// A property of a Class declaration
struct ASTProperty
{
    enum Modifier
    {
        Constant,
        ReadOnly,
        ReadPush,
        ReadWrite
    };

    ASTProperty();
    ASTProperty(const QString &type, const QString &name, const QString &defaultValue, Modifier modifier, bool persisted);

    QString type;
    QString name;
    QString defaultValue;
    Modifier modifier;
    bool persisted;
};
Q_DECLARE_TYPEINFO(ASTProperty, Q_MOVABLE_TYPE);

struct ASTDeclaration
{
    enum VariableType {
        None = 0,
        Constant = 1,
        Reference = 2,
    };
    Q_DECLARE_FLAGS(VariableTypes, VariableType)

    ASTDeclaration(const QString &declarationType = QString(), const QString &declarationName = QString(), VariableTypes declarationVariableType = None)
        : type(declarationType),
          name(declarationName),
          variableType(declarationVariableType)
    {
    }

    QString asString(bool withName) const;

    QString type;
    QString name;
    VariableTypes variableType;
};
Q_DECLARE_TYPEINFO(ASTDeclaration, Q_MOVABLE_TYPE);

struct ASTFunction
{
    enum ParamsAsStringFormat {
        Default,
        Normalized
    };

    explicit ASTFunction(const QString &name = QString(), const QString &returnType = QLatin1String("void"));

    QString paramsAsString(ParamsAsStringFormat format = Default) const;
    QStringList paramNames() const;

    QString returnType;
    QString name;
    QVector<ASTDeclaration> params;
};
Q_DECLARE_TYPEINFO(ASTFunction, Q_MOVABLE_TYPE);

struct ASTEnumParam
{
    ASTEnumParam(const QString &paramName = QString(), int paramValue = 0)
        : name(paramName),
          value(paramValue)
    {
    }

    QString asString() const;

    QString name;
    int value;
};
Q_DECLARE_TYPEINFO(ASTEnumParam, Q_MOVABLE_TYPE);

struct ASTEnum
{
    explicit ASTEnum(const QString &name = QString());

    QString name;
    QVector<ASTEnumParam> params;
    bool isSigned;
    int max;
};
Q_DECLARE_TYPEINFO(ASTEnum, Q_MOVABLE_TYPE);

struct ASTModelRole
{
    ASTModelRole(const QString &roleName = QString())
        : name(roleName)
    {
    }

    QString name;
};
Q_DECLARE_TYPEINFO(ASTModelRole, Q_MOVABLE_TYPE);

struct ASTModel
{
    explicit ASTModel(const QString &name = QString());

    QVector<ASTModelRole> roles;
    QString name;
};
Q_DECLARE_TYPEINFO(ASTModel, Q_MOVABLE_TYPE);

/// A Class declaration
struct ASTClass
{
    explicit ASTClass(const QString& name = QString());

    bool isValid() const;

    QString name;
    QVector<ASTProperty> properties;
    QVector<ASTFunction> signalsList;
    QVector<ASTFunction> slotsList;
    QVector<ASTEnum> enums;
    bool hasPersisted;
    QVector<ASTModel> models;
};
Q_DECLARE_TYPEINFO(ASTClass, Q_MOVABLE_TYPE);

// The attribute of a POD
struct PODAttribute
{
    explicit PODAttribute(const QString &type_ = QString(), const QString &name_ = QString())
        : type(type_),
          name(name_)
    {}
    QString type;
    QString name;
};
Q_DECLARE_TYPEINFO(PODAttribute, Q_MOVABLE_TYPE);

// A POD declaration
struct POD
{
    QString name;
    QVector<PODAttribute> attributes;
};
Q_DECLARE_TYPEINFO(POD, Q_MOVABLE_TYPE);

// The AST representation of a .rep file
struct AST
{
    QVector<ASTClass> classes;
    QVector<POD> pods;
    QVector<ASTEnum> enums;
    QVector<QString> enumUses;
    QStringList preprocessorDirectives;
};
Q_DECLARE_TYPEINFO(AST, Q_MOVABLE_TYPE);

class RepParser: public QRegexParser<RepParser, rep_grammar>
{
public:
    explicit RepParser(QIODevice &outputDevice);
    virtual ~RepParser() {}

    bool parse() Q_DECL_OVERRIDE { return QRegexParser<RepParser, rep_grammar>::parse(); }

    void reset() Q_DECL_OVERRIDE;
    int nextToken();
    bool consumeRule(int ruleno);

    AST ast() const;

private:
    struct TypeParser
    {
        void parseArguments(const QString &arguments);
        void appendParams(ASTFunction &slot);
        void appendPods(POD &pods);
        void generateFunctionParameter(QString variableName, const QString &propertyType, int &variableNameIndex, ASTDeclaration::VariableTypes variableType);
        //Type, Variable
        QList<ASTDeclaration> arguments;
    };

    bool parseProperty(ASTClass &astClass, const QString &propertyDeclaration);
    /// A helper function to parse modifier flag of property declaration
    bool parseModifierFlag(const QString &flag, ASTProperty::Modifier &modifier, bool &persisted);

    bool parseRoles(ASTModel &astModel, const QString &modelRoles);

    AST m_ast;

    ASTClass m_astClass;
    ASTEnum m_astEnum;
    int m_astEnumValue;
};
QT_END_NAMESPACE
#endif
