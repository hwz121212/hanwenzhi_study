#include "qnativewifiengine.h"
#include "platformdefs.h"

#include <QtCore/qmutex.h>
#include <QtCore/qlibrary.h>

#include <QtNetwork/private/qbearerplugin_p.h>

#include <QtCore/qdebug.h>

#include "qnativewifibearer_main.h"

#ifndef QT_NO_BEARERMANAGEMENT

QT_BEGIN_NAMESPACE

static bool resolveLibraryInternal()
{
    QLibrary wlanapiLib(QLatin1String("wlanapi"));
    local_WlanOpenHandle = (WlanOpenHandleProto)
                           wlanapiLib.resolve("WlanOpenHandle");
    local_WlanRegisterNotification = (WlanRegisterNotificationProto)
                                     wlanapiLib.resolve("WlanRegisterNotification");
    local_WlanEnumInterfaces = (WlanEnumInterfacesProto)
                               wlanapiLib.resolve("WlanEnumInterfaces");
    local_WlanGetAvailableNetworkList = (WlanGetAvailableNetworkListProto)
                                        wlanapiLib.resolve("WlanGetAvailableNetworkList");
    local_WlanQueryInterface = (WlanQueryInterfaceProto)
                               wlanapiLib.resolve("WlanQueryInterface");
    local_WlanConnect = (WlanConnectProto)
                        wlanapiLib.resolve("WlanConnect");
    local_WlanDisconnect = (WlanDisconnectProto)
                           wlanapiLib.resolve("WlanDisconnect");
    local_WlanScan = (WlanScanProto)
                     wlanapiLib.resolve("WlanScan");
    local_WlanFreeMemory = (WlanFreeMemoryProto)
                           wlanapiLib.resolve("WlanFreeMemory");
    local_WlanCloseHandle = (WlanCloseHandleProto)
                            wlanapiLib.resolve("WlanCloseHandle");
    return true;
}
Q_GLOBAL_STATIC_WITH_ARGS(bool, resolveLibrary, (resolveLibraryInternal()))



QNativeWifiEnginePlugin::QNativeWifiEnginePlugin()
{
}

QNativeWifiEnginePlugin::~QNativeWifiEnginePlugin()
{
}

QBearerEngine *QNativeWifiEnginePlugin::create(const QString &key) const
{
    if (key != QLatin1String("nativewifi"))
        return 0;

    resolveLibrary();

    // native wifi dll not available
    if (!local_WlanOpenHandle)
        return 0;

    QNativeWifiEngine *engine = new QNativeWifiEngine;

    // could not initialise subsystem
    if (engine && !engine->available()) {
        delete engine;
        return 0;
    }

    return engine;
}

QT_END_NAMESPACE

//#include "moc_qnativewifibearer_main.cpp"

#endif // QT_NO_BEARERMANAGEMENT
