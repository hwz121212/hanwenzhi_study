@echo off
SetLocal EnableDelayedExpansion
(set QT_VERSION=5.9.6)
(set QT_VER=5.9)
(set QT_VERSION_TAG=596)
(set QT_INSTALL_DOCS=C:/QT/QT5.9.6/Docs/Qt-5.9.6)
(set BUILDDIR=F:/qt/Src/qtsensors/src/sensors)
C:\QT\QT5.9.6\5.9.6\MSVC2017_64\bin\qdoc.exe %*
EndLocal
