/****************************************************************************
**
** Copyright (C) 2014 John Layt <jlayt@kde.org>
** Contact: https://www.qt.io/licensing/
**
** This file is part of the plugins of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or (at your option) the GNU General
** Public license version 3 or any later version approved by the KDE Free
** Qt Foundation. The licenses are as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-2.0.html and
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QPPDPRINTDEVICE_H
#define QPPDPRINTDEVICE_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists for the convenience
// of internal files.  This header file may change from version to version
// without notice, or even be removed.
//
// We mean it.
//

#include <qpa/qplatformprintdevice.h>

#include <QtCore/qbytearray.h>
#include <QtCore/qhash.h>
#include <QtCore/qmargins.h>

#include <cups/cups.h>
#include <cups/ppd.h>

QT_BEGIN_NAMESPACE

class QPpdPrintDevice : public QPlatformPrintDevice
{
public:
    QPpdPrintDevice();
    explicit QPpdPrintDevice(const QString &id);
    virtual ~QPpdPrintDevice();

    bool isValid() const Q_DECL_OVERRIDE;
    bool isDefault() const Q_DECL_OVERRIDE;

    QPrint::DeviceState state() const Q_DECL_OVERRIDE;

    QPageSize defaultPageSize() const Q_DECL_OVERRIDE;

    QMarginsF printableMargins(const QPageSize &pageSize, QPageLayout::Orientation orientation,
                               int resolution) const Q_DECL_OVERRIDE;

    int defaultResolution() const Q_DECL_OVERRIDE;

    QPrint::InputSlot defaultInputSlot() const Q_DECL_OVERRIDE;

    QPrint::OutputBin defaultOutputBin() const Q_DECL_OVERRIDE;

    QPrint::DuplexMode defaultDuplexMode() const Q_DECL_OVERRIDE;

    QPrint::ColorMode defaultColorMode() const Q_DECL_OVERRIDE;

protected:
    void loadPageSizes() const Q_DECL_OVERRIDE;
    void loadResolutions() const Q_DECL_OVERRIDE;
    void loadInputSlots() const Q_DECL_OVERRIDE;
    void loadOutputBins() const Q_DECL_OVERRIDE;
    void loadDuplexModes() const Q_DECL_OVERRIDE;
    void loadColorModes() const Q_DECL_OVERRIDE;
#ifndef QT_NO_MIMETYPE
    void loadMimeTypes() const Q_DECL_OVERRIDE;
#endif

private:
    void loadPrinter();
    QString printerOption(const QString &key) const;
    cups_ptype_e printerTypeFlags() const;

    cups_dest_t *m_cupsDest;
    ppd_file_t *m_ppd;
    QByteArray m_cupsName;
    QByteArray m_cupsInstance;
    QMarginsF m_customMargins;
    mutable QHash<QString, QMarginsF> m_printableMargins;
};

QT_END_NAMESPACE

#endif // QPPDPRINTDEVICE_H
