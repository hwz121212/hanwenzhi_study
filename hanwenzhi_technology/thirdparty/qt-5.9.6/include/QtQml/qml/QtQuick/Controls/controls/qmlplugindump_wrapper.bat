@echo off
SetLocal EnableDelayedExpansion
(set QML2_IMPORT_PATH=F:\qt\Src\qtdeclarative\qml;F:\qt\Src\qtremoteobjects\qml;F:\qt\Src\qtscxml\qml;F:\qt\Src\qtpurchasing\qml;F:\qt\Src\qtcanvas3d\qml;F:\qt\Src\qtwebsockets\qml;F:\qt\Src\qtwebchannel\qml;F:\qt\Src\qtgamepad\qml;F:\qt\Src\qt3d\qml;F:\qt\Src\qtconnectivity\qml;F:\qt\Src\qtsensors\qml;F:\qt\Src\qtgraphicaleffects\qml;F:\qt\Src\qtquickcontrols2\qml;F:\qt\Src\qtquickcontrols\qml;F:\qt\Src\qtlocation\qml;F:\qt\Src\qtmultimedia\qml;F:\qt\Src\qtvirtualkeyboard\qml;F:\qt\Src\qtdatavis3d\qml;F:\qt\Src\qtcharts\qml;F:\qt\Src\qtwinextras\qml;F:\qt\Src\qtwebview\qml)
(set PATH=F:\qt\Src\qtdeclarative\bin;F:\qt\Src\qtbase\bin;!PATH!)
if defined QT_PLUGIN_PATH (
    set QT_PLUGIN_PATH=C:\QT\QT5.9.6\5.9.6\MSVC2017_64\plugins;F:\qt\Src\qtvirtualkeyboard\plugins;F:\qt\Src\qtdeclarative\plugins;F:\qt\Src\qtsvg\plugins;F:\qt\Src\qtbase\plugins;!QT_PLUGIN_PATH!
) else (
    set QT_PLUGIN_PATH=C:\QT\QT5.9.6\5.9.6\MSVC2017_64\plugins;F:\qt\Src\qtvirtualkeyboard\plugins;F:\qt\Src\qtdeclarative\plugins;F:\qt\Src\qtsvg\plugins;F:\qt\Src\qtbase\plugins
)
F:\qt\Src\qtdeclarative\bin\qmlplugindump.exe %*
EndLocal
