#include "qtquicktemplates2plugin.h"


QtQuickTemplates2Plugin::QtQuickTemplates2Plugin(QObject *parent) : QQmlExtensionPlugin(parent)
{
    initResources();

#if QT_CONFIG(shortcut)
    originalContextMatcher = qt_quick_shortcut_context_matcher();
    qt_quick_set_shortcut_context_matcher(QQuickShortcutContext::matcher);
#endif
}

QtQuickTemplates2Plugin::~QtQuickTemplates2Plugin()
{
#if QT_CONFIG(shortcut)
    qt_quick_set_shortcut_context_matcher(originalContextMatcher);
#endif
}

void QtQuickTemplates2Plugin::registerTypes(const char *uri)
{
    qmlRegisterModule(uri, 2, QT_VERSION_MINOR - 7); // Qt 5.7->2.0, 5.8->2.1, 5.9->2.2...

    // QtQuick.Templates 2.0 (originally introduced in Qt 5.7)
    qmlRegisterType<QQuickAbstractButton>(uri, 2, 0, "AbstractButton");
    qmlRegisterType<QQuickApplicationWindow>(uri, 2, 0, "ApplicationWindow");
    qmlRegisterType<QQuickApplicationWindowAttached>();
    qmlRegisterType<QQuickBusyIndicator>(uri, 2, 0, "BusyIndicator");
    qmlRegisterType<QQuickButton>(uri, 2, 0, "Button");
    qmlRegisterType<QQuickButtonGroup>(uri, 2, 0, "ButtonGroup");
    qmlRegisterType<QQuickButtonGroupAttached>();
    qmlRegisterType<QQuickCheckBox>(uri, 2, 0, "CheckBox");
    qmlRegisterType<QQuickCheckDelegate>(uri, 2, 0, "CheckDelegate");
    qmlRegisterType<QQuickComboBox>(uri, 2, 0, "ComboBox");
    qmlRegisterType<QQuickContainer>(uri, 2, 0, "Container");
    qmlRegisterType<QQuickControl>(uri, 2, 0, "Control");
    qmlRegisterType<QQuickDial>(uri, 2, 0, "Dial");
    qmlRegisterType<QQuickDrawer>(uri, 2, 0, "Drawer");
    qmlRegisterType<QQuickFrame>(uri, 2, 0, "Frame");
    qmlRegisterType<QQuickGroupBox>(uri, 2, 0, "GroupBox");
    qmlRegisterType<QQuickItemDelegate>(uri, 2, 0, "ItemDelegate");
    qmlRegisterType<QQuickLabel>(uri, 2, 0, "Label");
    qmlRegisterType<QQuickMenu>(uri, 2, 0, "Menu");
    qmlRegisterType<QQuickMenuItem>(uri, 2, 0, "MenuItem");
    qmlRegisterType<QQuickOverlay>();
    qmlRegisterType<QQuickPage>(uri, 2, 0, "Page");
    qmlRegisterType<QQuickPageIndicator>(uri, 2, 0, "PageIndicator");
    qmlRegisterType<QQuickPane>(uri, 2, 0, "Pane");
    qmlRegisterType<QQuickPopup>(uri, 2, 0, "Popup");
    qmlRegisterType<QQuickProgressBar>(uri, 2, 0, "ProgressBar");
    qmlRegisterType<QQuickRadioButton>(uri, 2, 0, "RadioButton");
    qmlRegisterType<QQuickRadioDelegate>(uri, 2, 0, "RadioDelegate");
    qmlRegisterType<QQuickRangeSlider>(uri, 2, 0, "RangeSlider");
    qmlRegisterType<QQuickRangeSliderNode>();
    qmlRegisterType<QQuickScrollBar>(uri, 2, 0, "ScrollBar");
    qmlRegisterType<QQuickScrollBarAttached>();
    qmlRegisterType<QQuickScrollIndicator>(uri, 2, 0, "ScrollIndicator");
    qmlRegisterType<QQuickScrollIndicatorAttached>();
    qmlRegisterType<QQuickSlider>(uri, 2, 0, "Slider");
    qmlRegisterType<QQuickSpinBox>(uri, 2, 0, "SpinBox");
    qmlRegisterType<QQuickSpinButton>();
    qmlRegisterType<QQuickStackView>(uri, 2, 0, "StackView");
    qmlRegisterType<QQuickStackViewAttached>();
    qmlRegisterType<QQuickSwipeDelegate>(uri, 2, 0, "SwipeDelegate");
    qmlRegisterType<QQuickSwipe>();
    qmlRegisterType<QQuickSwipeViewAttached>();
    qmlRegisterType<QQuickSwipeView>(uri, 2, 0, "SwipeView");
    qmlRegisterType<QQuickSwitch>(uri, 2, 0, "Switch");
    qmlRegisterType<QQuickSwitchDelegate>(uri, 2, 0, "SwitchDelegate");
    qmlRegisterType<QQuickTabBar>(uri, 2, 0, "TabBar");
    qmlRegisterType<QQuickTabButton>(uri, 2, 0, "TabButton");
    qmlRegisterType<QQuickTextAreaAttached>();
    qmlRegisterType<QQuickTextArea>(uri, 2, 0, "TextArea");
    qmlRegisterType<QQuickTextField>(uri, 2, 0, "TextField");
    qmlRegisterType<QQuickToolBar>(uri, 2, 0, "ToolBar");
    qmlRegisterType<QQuickToolButton>(uri, 2, 0, "ToolButton");
    qmlRegisterType<QQuickToolTipAttached>();
    qmlRegisterType<QQuickToolTip>(uri, 2, 0, "ToolTip");
#if QT_CONFIG(quick_listview) && QT_CONFIG(quick_pathview)
    qmlRegisterType<QQuickTumblerAttached>();
    qmlRegisterType<QQuickTumbler>(uri, 2, 0, "Tumbler");
#endif

    // NOTE: register the latest revisions of all template/control base classes to
    // make revisioned properties available to their subclasses (synced with Qt 5.7)
    qmlRegisterRevision<QQuickItem, 7>(uri, 2, 0);
    qmlRegisterRevision<QQuickWindow, 2>(uri, 2, 0);
    qmlRegisterRevision<QQuickText, 6>(uri, 2, 0);
    qmlRegisterRevision<QQuickTextInput, 7>(uri, 2, 0);
    qmlRegisterRevision<QQuickTextEdit, 7>(uri, 2, 0);
    qmlRegisterRevision<QWindow, 3>(uri, 2, 0);

    // QtQuick.Templates 2.1 (new types and revisions in Qt 5.8)
    qmlRegisterType<QQuickButtonGroup, 1>(uri, 2, 1, "ButtonGroup");
    qmlRegisterType<QQuickComboBox, 1>(uri, 2, 1, "ComboBox");
    qmlRegisterType<QQuickContainer, 1>(uri, 2, 1, "Container");
    qmlRegisterType<QQuickDialog>(uri, 2, 1, "Dialog");
    qmlRegisterType<QQuickDialogButtonBox>(uri, 2, 1, "DialogButtonBox");
    qmlRegisterType<QQuickDialogButtonBoxAttached>();
    qmlRegisterType<QQuickMenuSeparator>(uri, 2, 1, "MenuSeparator");
    qmlRegisterType<QQuickPage, 1>(uri, 2, 1, "Page");
    qmlRegisterType<QQuickPopup, 1>(uri, 2, 1, "Popup");
    qmlRegisterType<QQuickRangeSlider, 1>(uri, 2, 1, "RangeSlider");
    qmlRegisterType<QQuickRoundButton>(uri, 2, 1, "RoundButton");
    qmlRegisterType<QQuickSlider, 1>(uri, 2, 1, "Slider");
    qmlRegisterType<QQuickSpinBox, 1>(uri, 2, 1, "SpinBox");
    qmlRegisterType<QQuickStackView, 1>(uri, 2, 1, "StackView");
    qmlRegisterType<QQuickSwipeDelegate, 1>(uri, 2, 1, "SwipeDelegate");
    qmlRegisterType<QQuickSwipeView, 1>(uri, 2, 1, "SwipeView");
    qmlRegisterType<QQuickTextArea, 1>(uri, 2, 1, "TextArea");
    qmlRegisterType<QQuickTextField, 1>(uri, 2, 1, "TextField");
    qmlRegisterType<QQuickToolSeparator>(uri, 2, 1, "ToolSeparator");
#if QT_CONFIG(quick_listview) && QT_CONFIG(quick_pathview)
    qmlRegisterType<QQuickTumbler, 1>(uri, 2, 1, "Tumbler");
#endif

    // QtQuick.Templates 2.2 (new types and revisions in Qt 5.9)
    qmlRegisterType<QQuickAbstractButton, 2>(uri, 2, 2, "AbstractButton");
    qmlRegisterType<QQuickComboBox, 2>(uri, 2, 2, "ComboBox");
    qmlRegisterType<QQuickDelayButton>(uri, 2, 2, "DelayButton");
    qmlRegisterType<QQuickDial, 2>(uri, 2, 2, "Dial");
    qmlRegisterType<QQuickDrawer, 2>(uri, 2, 2, "Drawer");
    qmlRegisterType<QQuickRangeSlider, 2>(uri, 2, 2, "RangeSlider");
    qmlRegisterType<QQuickScrollBar, 2>(uri, 2, 2, "ScrollBar");
    qmlRegisterType<QQuickScrollView>(uri, 2, 2, "ScrollView");
    qmlRegisterType<QQuickSlider, 2>(uri, 2, 2, "Slider");
    qmlRegisterType<QQuickSpinBox, 2>(uri, 2, 2, "SpinBox");
    qmlRegisterType<QQuickSwipeDelegate, 2>(uri, 2, 2, "SwipeDelegate");
    qmlRegisterType<QQuickSwipeView, 2>(uri, 2, 2, "SwipeView");
    qmlRegisterType<QQuickTabBar, 2>(uri, 2, 2, "TabBar");
#if QT_CONFIG(quick_listview) && QT_CONFIG(quick_pathview)
    qmlRegisterType<QQuickTumbler, 2>(uri, 2, 2, "Tumbler");
#endif

    // NOTE: register the latest revisions of all template/control base classes to
    // make revisioned properties available to their subclasses (synced with Qt 5.9)
    qmlRegisterRevision<QQuickText, 9>(uri, 2, 2);
    qmlRegisterRevision<QQuickTextInput, 9>(uri, 2, 2);
    qmlRegisterRevision<QQuickWindowQmlImpl, 2>(uri, 2, 2);
}

QT_END_NAMESPACE

//#include "qtquicktemplates2plugin.moc"
