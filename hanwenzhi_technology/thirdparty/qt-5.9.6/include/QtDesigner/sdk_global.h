/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the Qt Designer of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:GPL-EXCEPT$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef SDK_GLOBAL_H
#define SDK_GLOBAL_H

#include <QtCore/qglobal.h>

QT_BEGIN_NAMESPACE

#define QDESIGNER_SDK_EXTERN Q_DECL_EXPORT
#define QDESIGNER_SDK_IMPORT Q_DECL_IMPORT

#ifdef QT_STATIC
#  define QDESIGNER_SDK_EXPORT
#elif defined(QDESIGNER_SDK_LIBRARY)
#  define QDESIGNER_SDK_EXPORT QDESIGNER_SDK_EXTERN
#else
#  define QDESIGNER_SDK_EXPORT QDESIGNER_SDK_IMPORT
#endif

QT_END_NAMESPACE

#endif // SDK_GLOBAL_H
