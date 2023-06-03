@echo off
SetLocal EnableDelayedExpansion
(set QT_VERSION=5.9.6)
(set QT_VER=5.9)
(set QT_VERSION_TAG=596)
(set QT_INSTALL_DOCS=C:/QT/QT5.9.6/Docs/Qt-5.9.6)
(set BUILDDIR=F:/qt/Src/qtquickcontrols/src/controls)
(set PATH=F:\qt\Src\qtbase\bin;!PATH!)
if defined QT_PLUGIN_PATH (
    set QT_PLUGIN_PATH=C:\QT\QT5.9.6\5.9.6\MSVC2017_64\plugins;!QT_PLUGIN_PATH!
) else (
    set QT_PLUGIN_PATH=C:\QT\QT5.9.6\5.9.6\MSVC2017_64\plugins
)
F:\qt\Src\qttools\bin\qdoc.exe %*
EndLocal
