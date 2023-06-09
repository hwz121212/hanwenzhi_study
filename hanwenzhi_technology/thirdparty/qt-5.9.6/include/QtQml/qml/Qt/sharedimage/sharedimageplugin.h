#pragma once

#include <qqmlextensionplugin.h>
#include <qqmlengine.h>
#include <sharedimageprovider.h>


/*!
    \qmlmodule Qt.labs.sharedimage 1
    \title Qt Quick Shared Image Provider
    \ingroup qmlmodules
    \brief Adds an image provider which utilizes shared CPU memory

    \section2 Summary

    This module provides functionality to save memory in use cases where
    several Qt Quick applications use the same local image files. It does this
    by placing the decoded QImage data in shared system memory, making it
    accessible to all the processes (see QSharedMemory).

    This module only shares CPU memory. It does not provide sharing of GPU
    memory or textures.

    \section2 Usage

    To use this module, import it like this:
    \code
    import Qt.labs.sharedimage 1.0
    \endcode

    The sharing functionality is provided through a QQuickImageProvider. Use
    the "image:" scheme for the URL source of the image, followed by the
    identifier \e shared, followed by the image file path. For example:

    \code
    Image { source: "image://shared/usr/share/wallpapers/mybackground.jpg" }
    \endcode

    This will look for the file \e /usr/share/wallpapers/mybackground.jpg.
    The first process that does this will read the image file
    using normal Qt image loading. The decoded image data will then be placed
    in shared memory, using the full file path as key. Later processes
    requesting the same image will discover that the data is already available
    in shared memory. They will then use that instead of loading the image file
    again.

    The shared image data will be kept available until the last process has deleted
    its last reference to the shared image, at which point it is automatically released.

    If system memory sharing is not available, the shared image provider falls
    back to normal, unshared image loading.

    The file path must be absolute. To use a relative path, make it absolute
    using \e Qt.resolvedUrl() and replace the URL scheme. For example:

    \code
    ...
    property string imagePrefix: Qt.resolvedUrl("../myimages/").replace("file://", "image://shared/")
    Image { source: imagePrefix + "myimage.png" }
    \endcode

    The shared image module does not provide any directly usable QML types.
*/

QT_BEGIN_NAMESPACE

class QtQuickSharedImagePlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)
public:
    QtQuickSharedImagePlugin(QObject *parent = 0) : QQmlExtensionPlugin(parent) {}

	void registerTypes(const char *uri) override;
   

	void initializeEngine(QQmlEngine *engine, const char *uri) override;

};

QT_END_NAMESPACE