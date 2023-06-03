#include "qmlfolderlistmodelplugin.h"


QT_BEGIN_NAMESPACE


void QmlFolderListModelPlugin::registerTypes(const char *uri)
{
	Q_ASSERT(QLatin1String(uri) == QLatin1String("Qt.labs.folderlistmodel"));
	qmlRegisterType<QQuickFolderListModel>(uri, 1, 0, "FolderListModel");
	qmlRegisterType<QQuickFolderListModel>(uri, 2, 0, "FolderListModel");
	qmlRegisterType<QQuickFolderListModel, 1>(uri, 2, 1, "FolderListModel");
	qmlRegisterType<QQuickFolderListModel, 2>(uri, 2, 2, "FolderListModel");
}

QT_END_NAMESPACE