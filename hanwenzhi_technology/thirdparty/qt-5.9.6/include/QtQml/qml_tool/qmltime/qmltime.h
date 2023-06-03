#pragma once

#include <QQmlEngine>
#include <QQmlComponent>
#include <QDebug>
#include <QGuiApplication>
#include <QTime>
#include <QQmlContext>
#include <QQuickView>
#include <QQuickItem>

#include <private/qquickview_p.h>

class Timer : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QQmlComponent *component READ component WRITE setComponent)

public:
    Timer();

    QQmlComponent *component() const;
    void setComponent(QQmlComponent *);

    static Timer *timerInstance();

    void run(uint);

    bool willParent() const;
    void setWillParent(bool p);

private:
    void runTest(QQmlContext *, uint);

    QQmlComponent *m_component;
    static Timer *m_timer;

    bool m_willparent;
    QQuickView m_view;
    QQuickItem *m_item;
};