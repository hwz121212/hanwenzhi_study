#pragma once

#include <qpa/qplatformintegrationplugin.h>
#include <QtCore/QStringList>

#include "qwindowsgdiintegration.h"

QT_BEGIN_NAMESPACE

/*!
    \group qt-lighthouse-win
    \title Qt Lighthouse plugin for Windows

    \brief Class documentation of the  Qt Lighthouse plugin for Windows.

    \section1 Supported Parameters

    The following parameters can be passed on to the -platform argument
    of QGuiApplication:

    \list
    \li \c fontengine=native Indicates that native font engine should be used (default)
    \li \c fontengine=freetype Indicates that freetype font engine should be used
    \li \c gl=gdi Indicates that ARB Open GL functionality should not be used
    \endlist

    \section1 Tips

    \list
    \li The environment variable \c QT_QPA_VERBOSE controls
       the debug level. It takes the form
       \c{<keyword1>:<level1>,<keyword2>:<level2>}, where
       keyword is one of \c integration, \c windows, \c backingstore and
       \c fonts. Level is an integer 0..9.
    \endlist
    \internal
 */

/*!
    \class QWindowsIntegrationPlugin
    \brief Plugin.
    \internal
    \ingroup qt-lighthouse-win
 */

/*!
    \namespace QtWindows

    \brief Namespace for enumerations, etc.
    \internal
    \ingroup qt-lighthouse-win
*/

/*!
    \enum QtWindows::WindowsEventType

    \brief Enumerations for WM_XX events.

    With flags that should help to structure the code.

    \internal
    \ingroup qt-lighthouse-win
*/

class QWindowsIntegrationPlugin : public QPlatformIntegrationPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QPlatformIntegrationFactoryInterface_iid FILE "windows.json")
public:
    QPlatformIntegration *create(const QString&, const QStringList&, int &, char **);
};
