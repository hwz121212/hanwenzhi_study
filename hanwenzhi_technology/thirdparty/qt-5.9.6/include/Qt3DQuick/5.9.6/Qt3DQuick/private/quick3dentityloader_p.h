/****************************************************************************
**
** Copyright (C) 2014 Klaralvdalens Datakonsult AB (KDAB).
** Contact: https://www.qt.io/licensing/
**
** This file is part of the Qt3D module of the Qt Toolkit.
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

#ifndef QT3D_QUICK_QUICK3DENTITYLOADER_P_H
#define QT3D_QUICK_QUICK3DENTITYLOADER_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists for the convenience
// of other Qt classes.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include <Qt3DCore/QEntity>
#include <QtCore/QObject>
#include <QtCore/QUrl>
#include <qqmlincubator.h>

#include <Qt3DQuick/private/qt3dquick_global_p.h>
#include <Qt3DCore/private/qentity_p.h>
#include <qqmlcomponent.h>

QT_BEGIN_NAMESPACE

namespace Qt3DCore {

class QEntity;

namespace Quick {

class Quick3DEntityLoaderPrivate;

class QT3DQUICKSHARED_PRIVATE_EXPORT Quick3DEntityLoader : public QEntity
{
    Q_OBJECT
    Q_PROPERTY(QObject *entity READ entity NOTIFY entityChanged)
    Q_PROPERTY(QUrl source READ source WRITE setSource NOTIFY sourceChanged)
    Q_PROPERTY(Status status READ status NOTIFY statusChanged)
public:
    enum Status {
        Null = 0,
        Loading,
        Ready,
        Error
    };
    Q_ENUM(Status)

    explicit Quick3DEntityLoader(QNode *parent = 0);
    ~Quick3DEntityLoader();

    QObject *entity() const;

    QUrl source() const;
    void setSource(const QUrl &url);

    Status status() const;

Q_SIGNALS:
    void entityChanged();
    void sourceChanged();
    void statusChanged(Status status);

private:
    Q_DECLARE_PRIVATE(Quick3DEntityLoader)
    Q_PRIVATE_SLOT(d_func(), void _q_componentStatusChanged(QQmlComponent::Status))
};



class Quick3DEntityLoaderIncubator : public QQmlIncubator
{
public:
	Quick3DEntityLoaderIncubator(Quick3DEntityLoader *loader);
protected:
	void statusChanged(Status status) Q_DECL_FINAL;
private:
	Quick3DEntityLoader *m_loader;
};


class Quick3DEntityLoaderPrivate : public QEntityPrivate
{
public:
	Quick3DEntityLoaderPrivate();

	Q_DECLARE_PUBLIC(Quick3DEntityLoader)

		void clear();
	void loadFromSource();
	void loadComponent(const QUrl &source);

	void _q_componentStatusChanged(QQmlComponent::Status status);
	void setStatus(Quick3DEntityLoader::Status status);

	static inline Quick3DEntityLoaderPrivate *get(Quick3DEntityLoader *q) { return q->d_func(); }

	QUrl m_source;
	Quick3DEntityLoaderIncubator *m_incubator;
	QQmlContext *m_context;
	QQmlComponent *m_component;
	QEntity *m_entity;
	Quick3DEntityLoader::Status m_status;
};


} // namespace Quick
} // namespace Qt3DCore

QT_END_NAMESPACE

#endif // QT3D_QUICK_QUICK3DENTITYLOADER_P_H
