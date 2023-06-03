@echo off
SetLocal EnableDelayedExpansion
(set PATH=F:\qt\Src\qtbase\bin;!PATH!)
if defined QT_PLUGIN_PATH (
    set QT_PLUGIN_PATH=C:\QT\QT5.9.6\5.9.6\MSVC2017_64\plugins;!QT_PLUGIN_PATH!
) else (
    set QT_PLUGIN_PATH=C:\QT\QT5.9.6\5.9.6\MSVC2017_64\plugins
)
F:\qt\Src\qtbase\bin\uic.exe %*
EndLocal
