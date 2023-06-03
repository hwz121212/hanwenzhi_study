/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
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

#ifndef QWINDOWSDIALOGHELPER_H
#define QWINDOWSDIALOGHELPER_H

#include <QtCore/qt_windows.h>
#include <qpa/qplatformdialoghelper.h>
#include <qpa/qplatformtheme.h>
#include <QtCore/QStringList>
#include <QtCore/QSharedPointer>

#include "qwindowscontext.h"
#include "qwindowswindow.h"
#include "qwindowsintegration.h"
#include "qwindowstheme.h" // Color conversion helpers

#include <QtGui/QGuiApplication>
#include <QtGui/QColor>

#include <QtCore/QDebug>
#include <QtCore/QRegExp>
#include <QtCore/QTimer>
#include <QtCore/QDir>
#include <QtCore/QScopedArrayPointer>
#include <QtCore/QSharedPointer>
#include <QtCore/QObject>
#include <QtCore/QThread>
#include <QtCore/QSysInfo>
#include <QtCore/QSharedData>
#include <QtCore/QExplicitlySharedDataPointer>
#include <QtCore/QMutex>
#include <QtCore/QMutexLocker>
#include <QtCore/QUuid>
#include <QtCore/QTemporaryFile>
#include <QtCore/private/qsystemlibrary_p.h>

#include <algorithm>
#include <vector>

#include <QtCore/qt_windows.h>


QT_BEGIN_NAMESPACE

class QFileDialog;
class QDialog;
class QThread;
class QWindowsNativeDialogBase;

namespace QWindowsDialogs
{
    void eatMouseMove();

    bool useHelper(QPlatformTheme::DialogType type);
    QPlatformDialogHelper *createHelper(QPlatformTheme::DialogType type);
} // namespace QWindowsDialogs

template <class BaseClass>
class QWindowsDialogHelperBase : public BaseClass
{
    Q_DISABLE_COPY(QWindowsDialogHelperBase)
public:
    typedef QSharedPointer<QWindowsNativeDialogBase> QWindowsNativeDialogBasePtr;
    ~QWindowsDialogHelperBase() { cleanupThread(); }

    void exec() override;
    bool show(Qt::WindowFlags windowFlags,
              Qt::WindowModality windowModality,
              QWindow *parent) override;
    void hide() override;

    virtual bool supportsNonModalDialog(const QWindow * /* parent */ = 0) const { return true; }

protected:
    QWindowsDialogHelperBase() {}
    QWindowsNativeDialogBase *nativeDialog() const;
    inline bool hasNativeDialog() const { return m_nativeDialog; }
    void timerEvent(QTimerEvent *) override;

private:
    virtual QWindowsNativeDialogBase *createNativeDialog() = 0;
    inline QWindowsNativeDialogBase *ensureNativeDialog();
    inline void startDialogThread();
    inline void stopTimer();
    void cleanupThread();

    QWindowsNativeDialogBasePtr m_nativeDialog;
    HWND m_ownerWindow = 0;
    int m_timerId = 0;
    QThread *m_thread = nullptr;
};






/*!
	\class QWindowsNativeDialogBase
	\brief Base class for Windows native dialogs.

	Base classes for native dialogs (using the CLSID-based
	dialog interfaces "IFileDialog", etc. available from Windows
	Vista on) that mimick the behaviour of their QDialog
	counterparts as close as possible.

	Instances of derived classes are controlled by
	QWindowsDialogHelperBase-derived classes.

	A major difference is that there is only an exec(), which
	is a modal, blocking call; there is no non-blocking show().
	There 2 types of native dialogs:

	\list
	\li Dialogs provided by the Comdlg32 library (ChooseColor,
	   ChooseFont). They only provide a modal, blocking
	   function call (with idle processing).
	\li File dialogs are classes derived from IFileDialog. They
	   inherit IModalWindow and their exec() method (calling
	   IModalWindow::Show()) is similarly blocking, but methods
	   like close() can be called on them from event handlers.
	\endlist

	\sa QWindowsDialogHelperBase
	\internal
	\ingroup qt-lighthouse-win
*/

class QWindowsNativeDialogBase : public QObject
{
	Q_OBJECT
public:
	virtual void setWindowTitle(const QString &title) = 0;
	bool executed() const { return m_executed; }
	void exec(HWND owner = 0) { doExec(owner); m_executed = true; }

signals:
	void accepted();
	void rejected();

public slots:
	virtual void close() = 0;

protected:
	QWindowsNativeDialogBase() : m_executed(false) {}

private:
	virtual void doExec(HWND owner = 0) = 0;

	bool m_executed;
};




/*!
	\class QWindowsDialogThread
	\brief Run a non-modal native dialog in a separate thread.

	\sa QWindowsDialogHelperBase
	\internal
	\ingroup qt-lighthouse-win
*/

class QWindowsDialogThread : public QThread
{
public:
	typedef QSharedPointer<QWindowsNativeDialogBase> QWindowsNativeDialogBasePtr;

	explicit QWindowsDialogThread(const QWindowsNativeDialogBasePtr &d, HWND owner)
		: m_dialog(d), m_owner(owner) {}
	void run();

private:
	const QWindowsNativeDialogBasePtr m_dialog;
	const HWND m_owner;
};




/*!
	\class QWindowsFileDialogSharedData
	\brief Explicitly shared file dialog parameters that are not in QFileDialogOptions.

	Contain Parameters that need to be cached while the native dialog does not
	exist yet. In addition, the data are updated by the change notifications of the
	IFileDialogEvent, as querying them after the dialog has closed
	does not reliably work. Provides thread-safe setters (for the non-modal case).

	\internal
	\ingroup qt-lighthouse-win
	\sa QFileDialogOptions
*/

class QWindowsFileDialogSharedData
{
public:
	QWindowsFileDialogSharedData() : m_data(new Data) {}
	void fromOptions(const QSharedPointer<QFileDialogOptions> &o);

	QUrl directory() const;
	void setDirectory(const QUrl &);
	QString selectedNameFilter() const;
	void setSelectedNameFilter(const QString &);
	QList<QUrl> selectedFiles() const;
	void setSelectedFiles(const QList<QUrl> &);
	QString selectedFile() const;

private:
	class Data : public QSharedData {
	public:
		QUrl directory;
		QString selectedNameFilter;
		QList<QUrl> selectedFiles;
		QMutex mutex;
	};
	QExplicitlySharedDataPointer<Data> m_data;
};






/*!
	\class QWindowsNativeFileDialogEventHandler
	\brief Listens to IFileDialog events and forwards them to QWindowsNativeFileDialogBase

	Events like 'folder change' that have an equivalent signal
	in QFileDialog are forwarded.

	\sa QWindowsNativeFileDialogBase, QWindowsFileDialogHelper
	\internal
	\ingroup qt-lighthouse-win
*/

class QWindowsNativeFileDialogBase;

class QWindowsNativeFileDialogEventHandler : public IFileDialogEvents
{
public:
	static IFileDialogEvents *create(QWindowsNativeFileDialogBase *nativeFileDialog);

	// IUnknown methods
	IFACEMETHODIMP QueryInterface(REFIID riid, void** ppv)
	{
		if (riid != IID_IUnknown && riid != IID_IFileDialogEvents) {
			*ppv = NULL;
			return ResultFromScode(E_NOINTERFACE);
		}
		*ppv = this;
		AddRef();
		return NOERROR;
	}

	IFACEMETHODIMP_(ULONG) AddRef() { return InterlockedIncrement(&m_ref); }

	IFACEMETHODIMP_(ULONG) Release()
	{
		const long ref = InterlockedDecrement(&m_ref);
		if (!ref)
			delete this;
		return ref;
	}

	// IFileDialogEvents methods
	IFACEMETHODIMP OnFileOk(IFileDialog *);
	IFACEMETHODIMP OnFolderChange(IFileDialog *) { return S_OK; }
	IFACEMETHODIMP OnFolderChanging(IFileDialog *, IShellItem *);
	IFACEMETHODIMP OnHelp(IFileDialog *) { return S_OK; }
	IFACEMETHODIMP OnSelectionChange(IFileDialog *);
	IFACEMETHODIMP OnShareViolation(IFileDialog *, IShellItem *, FDE_SHAREVIOLATION_RESPONSE *) { return S_OK; }
	IFACEMETHODIMP OnTypeChange(IFileDialog *);
	IFACEMETHODIMP OnOverwrite(IFileDialog *, IShellItem *, FDE_OVERWRITE_RESPONSE *) { return S_OK; }

	QWindowsNativeFileDialogEventHandler(QWindowsNativeFileDialogBase *nativeFileDialog) :
		m_nativeFileDialog(nativeFileDialog) {}
	virtual ~QWindowsNativeFileDialogEventHandler() {}

private:
	long m_ref = 1;
	QWindowsNativeFileDialogBase *m_nativeFileDialog;
};




/*!
	\class QWindowsShellItem
	\brief Wrapper for IShellItem

	\sa QWindowsNativeFileDialogBase
	\internal
	\ingroup qt-lighthouse-win
*/
class QWindowsShellItem
{
public:
	typedef std::vector<IShellItem *> IShellItems;

	explicit QWindowsShellItem(IShellItem *item);

	SFGAOF attributes() const { return m_attributes; }
	QString normalDisplay() const // base name, usually
	{
		return displayName(m_item, SIGDN_NORMALDISPLAY);
	}
	QString desktopAbsoluteParsing() const
	{
		return displayName(m_item, SIGDN_DESKTOPABSOLUTEPARSING);
	}
	QString path() const; // Only set for 'FileSystem' (SFGAO_FILESYSTEM) items
	QUrl url() const;

	bool isFileSystem() const { return (m_attributes & SFGAO_FILESYSTEM) != 0; }
	bool isDir() const { return (m_attributes & SFGAO_FOLDER) != 0; }
	// Copy using IFileOperation
	bool canCopy() const { return (m_attributes & SFGAO_CANCOPY) != 0; }
	// Supports IStream
	bool canStream() const { return (m_attributes & SFGAO_STREAM) != 0; }

	bool copyData(QIODevice *out);

	static IShellItems itemsFromItemArray(IShellItemArray *items);

#ifndef QT_NO_DEBUG_STREAM
	void format(QDebug &d) const;
#endif

private:
	static QString displayName(IShellItem *item, SIGDN mode);
	static QString libraryItemDefaultSaveFolder(IShellItem *item);
	QUrl urlValue() const;

	IShellItem *m_item;
	SFGAOF m_attributes;
};





/*!
	\class QWindowsNativeFileDialogBase
	\brief Windows native file dialog wrapper around IFileOpenDialog, IFileSaveDialog.

	Provides convenience methods.
	Note that only IFileOpenDialog has multi-file functionality.

	\sa QWindowsNativeFileDialogEventHandler, QWindowsFileDialogHelper
	\internal
	\ingroup qt-lighthouse-win
*/

class QWindowsNativeFileDialogBase : public QWindowsNativeDialogBase
{
	Q_OBJECT
		Q_PROPERTY(bool hideFiltersDetails READ hideFiltersDetails WRITE setHideFiltersDetails)
public:
	~QWindowsNativeFileDialogBase();

	inline static QWindowsNativeFileDialogBase *create(QFileDialogOptions::AcceptMode am, const QWindowsFileDialogSharedData &data);

	void setWindowTitle(const QString &title) override;
	inline void setMode(QFileDialogOptions::FileMode mode, QFileDialogOptions::AcceptMode acceptMode, QFileDialogOptions::FileDialogOptions options);
	inline void setDirectory(const QUrl &directory);
	inline void updateDirectory() { setDirectory(m_data.directory()); }
	inline QString directory() const;
	void doExec(HWND owner = 0) override;
	virtual void setNameFilters(const QStringList &f);
	inline void selectNameFilter(const QString &filter);
	inline void updateSelectedNameFilter() { selectNameFilter(m_data.selectedNameFilter()); }
	inline QString selectedNameFilter() const;
	void selectFile(const QString &fileName) const;
	bool hideFiltersDetails() const { return m_hideFiltersDetails; }
	void setHideFiltersDetails(bool h) { m_hideFiltersDetails = h; }
	void setDefaultSuffix(const QString &s);
	inline bool hasDefaultSuffix() const { return m_hasDefaultSuffix; }
	inline void setLabelText(QFileDialogOptions::DialogLabel l, const QString &text);

	// Return the selected files for tracking in OnSelectionChanged().
	virtual QList<QUrl> selectedFiles() const = 0;
	// Return the result for tracking in OnFileOk(). Differs from selection for
	// example by appended default suffixes, etc.
	virtual QList<QUrl> dialogResult() const = 0;

	inline void onFolderChange(IShellItem *);
	inline void onSelectionChange();
	inline void onTypeChange();
	inline bool onFileOk();

signals:
	void directoryEntered(const QUrl &directory);
	void currentChanged(const QUrl &file);
	void filterSelected(const QString & filter);

public slots:
	void close() override;

protected:
	explicit QWindowsNativeFileDialogBase(const QWindowsFileDialogSharedData &data);
	bool init(const CLSID &clsId, const IID &iid);
	void setDefaultSuffixSys(const QString &s);
	inline IFileDialog * fileDialog() const { return m_fileDialog; }
	static IShellItem *shellItem(const QUrl &url);

	const QWindowsFileDialogSharedData &data() const { return m_data; }
	QWindowsFileDialogSharedData &data() { return m_data; }

private:
	IFileDialog *m_fileDialog = nullptr;
	IFileDialogEvents *m_dialogEvents = nullptr;
	DWORD m_cookie = 0;
	QStringList m_nameFilters;
	bool m_hideFiltersDetails = false;
	bool m_hasDefaultSuffix = false;
	QWindowsFileDialogSharedData m_data;
	QString m_title;
};




/*!
	\class QWindowsNativeSaveFileDialog
	\brief Windows native file save dialog wrapper around IFileSaveDialog.

	Implements single-selection methods.

	\internal
	\ingroup qt-lighthouse-win
*/

class QWindowsNativeSaveFileDialog : public QWindowsNativeFileDialogBase
{
	Q_OBJECT
public:
	explicit QWindowsNativeSaveFileDialog(const QWindowsFileDialogSharedData &data)
		: QWindowsNativeFileDialogBase(data) {}
	void setNameFilters(const QStringList &f) override;
	QList<QUrl> selectedFiles() const override;
	QList<QUrl> dialogResult() const override;
};

// Return the first suffix from the name filter "Foo files (*.foo;*.bar)" -> "foo".
// Also handles the simple name filter case "*.txt" -> "txt"
static inline QString suffixFromFilter(const QString &filter)
{
	int suffixPos = filter.indexOf(QLatin1String("*."));
	if (suffixPos < 0)
		return QString();
	suffixPos += 2;
	int endPos = filter.indexOf(QLatin1Char(' '), suffixPos + 1);
	if (endPos < 0)
		endPos = filter.indexOf(QLatin1Char(';'), suffixPos + 1);
	if (endPos < 0)
		endPos = filter.indexOf(QLatin1Char(')'), suffixPos + 1);
	if (endPos < 0)
		endPos = filter.size();
	return filter.mid(suffixPos, endPos - suffixPos);
}




/*!
	\class QWindowsNativeOpenFileDialog
	\brief Windows native file save dialog wrapper around IFileOpenDialog.

	Implements multi-selection methods.

	\internal
	\ingroup qt-lighthouse-win
*/

class QWindowsNativeOpenFileDialog : public QWindowsNativeFileDialogBase
{
public:
	explicit QWindowsNativeOpenFileDialog(const QWindowsFileDialogSharedData &data) :
		QWindowsNativeFileDialogBase(data) {}
	QList<QUrl> selectedFiles() const override;
	QList<QUrl> dialogResult() const override;

private:
	inline IFileOpenDialog *openFileDialog() const
	{
		return static_cast<IFileOpenDialog *>(fileDialog());
	}
};





/*!
	\class QWindowsFileDialogHelper
	\brief Helper for native Windows file dialogs

	For Qt 4 compatibility, do not create native non-modal dialogs on widgets,
	but only on QQuickWindows, which do not have a fallback.

	\internal
	\ingroup qt-lighthouse-win
*/

class QWindowsFileDialogHelper : public QWindowsDialogHelperBase<QPlatformFileDialogHelper>
{
public:
	QWindowsFileDialogHelper() {}
	bool supportsNonModalDialog(const QWindow * /* parent */ = 0) const override { return false; }
	bool defaultNameFilterDisables() const override
	{
		return false;
	}
	void setDirectory(const QUrl &directory) override;
	QUrl directory() const override;
	void selectFile(const QUrl &filename) override;
	QList<QUrl> selectedFiles() const override;
	void setFilter() override;
	void selectNameFilter(const QString &filter) override;
	QString selectedNameFilter() const override;

private:
	QWindowsNativeDialogBase *createNativeDialog() override;
	inline QWindowsNativeFileDialogBase *nativeFileDialog() const
	{
		return static_cast<QWindowsNativeFileDialogBase *>(nativeDialog());
	}

	// Cache for the case no native dialog is created.
	QWindowsFileDialogSharedData m_data;
};





/*!
	\class QWindowsXpNativeFileDialog
	\brief Native Windows directory dialog for Windows XP using SHlib-functions.

	Uses the synchronous GetOpenFileNameW(), GetSaveFileNameW() from ComDlg32
	or SHBrowseForFolder() for directories.

	\internal
	\sa QWindowsXpFileDialogHelper

	\ingroup qt-lighthouse-win
*/

class QWindowsXpNativeFileDialog : public QWindowsNativeDialogBase
{
	Q_OBJECT
public:
	typedef QSharedPointer<QFileDialogOptions> OptionsPtr;

	static QWindowsXpNativeFileDialog *create(const OptionsPtr &options, const QWindowsFileDialogSharedData &data);

	void setWindowTitle(const QString &t) override { m_title = t; }
	void doExec(HWND owner = 0) override;

	int existingDirCallback(HWND hwnd, UINT uMsg, LPARAM lParam);

public slots:
	void close() override {}

private:
	typedef BOOL(APIENTRY *PtrGetOpenFileNameW)(LPOPENFILENAMEW);
	typedef BOOL(APIENTRY *PtrGetSaveFileNameW)(LPOPENFILENAMEW);

	explicit QWindowsXpNativeFileDialog(const OptionsPtr &options, const QWindowsFileDialogSharedData &data);
	void populateOpenFileName(OPENFILENAME *ofn, HWND owner) const;
	QList<QUrl> execExistingDir(HWND owner);
	QList<QUrl> execFileNames(HWND owner, int *selectedFilterIndex) const;

	const OptionsPtr m_options;
	QString m_title;
	QPlatformDialogHelper::DialogCode m_result;
	QWindowsFileDialogSharedData m_data;

	static PtrGetOpenFileNameW m_getOpenFileNameW;
	static PtrGetSaveFileNameW m_getSaveFileNameW;
};






/*!
	\class QWindowsXpFileDialogHelper
	\brief Dialog helper using QWindowsXpNativeFileDialog

	\sa QWindowsXpNativeFileDialog
	\internal
	\ingroup qt-lighthouse-win
*/

class QWindowsXpFileDialogHelper : public QWindowsDialogHelperBase<QPlatformFileDialogHelper>
{
public:
	QWindowsXpFileDialogHelper() {}
	bool supportsNonModalDialog(const QWindow * /* parent */ = 0) const override { return false; }
	bool defaultNameFilterDisables() const override
	{
		return true;
	}
	void setDirectory(const QUrl &directory) override;
	QUrl directory() const override;
	void selectFile(const QUrl &url) override;
	QList<QUrl> selectedFiles() const override;
	void setFilter() override {}
	void selectNameFilter(const QString &) override;
	QString selectedNameFilter() const override;

private:
	QWindowsNativeDialogBase *createNativeDialog() override;
	inline QWindowsXpNativeFileDialog *nativeFileDialog() const
	{
		return static_cast<QWindowsXpNativeFileDialog *>(nativeDialog());
	}

	QWindowsFileDialogSharedData m_data;
};






/*!
	\class QWindowsNativeColorDialog
	\brief Native Windows color dialog.

	Wrapper around Comdlg32's ChooseColor() function.
	Not currently in use as QColorDialog is equivalent.

	\sa QWindowsColorDialogHelper
	\sa #define USE_NATIVE_COLOR_DIALOG
	\internal
	\ingroup qt-lighthouse-win
*/

typedef QSharedPointer<QColor> SharedPointerColor;

#ifdef USE_NATIVE_COLOR_DIALOG
class QWindowsNativeColorDialog : public QWindowsNativeDialogBase
{
	Q_OBJECT
public:
	enum { CustomColorCount = 16 };

	explicit QWindowsNativeColorDialog(const SharedPointerColor &color);

	void setWindowTitle(const QString &) override {}

public slots:
	void close() override {}

private:
	void doExec(HWND owner = 0) override;

	COLORREF m_customColors[CustomColorCount];
	QPlatformDialogHelper::DialogCode m_code;
	SharedPointerColor m_color;
};


/*!
	\class QWindowsColorDialogHelper
	\brief Helper for native Windows color dialogs

	Not currently in use as QColorDialog is equivalent.

	\sa #define USE_NATIVE_COLOR_DIALOG
	\sa QWindowsNativeColorDialog
	\internal
	\ingroup qt-lighthouse-win
*/

class QWindowsColorDialogHelper : public QWindowsDialogHelperBase<QPlatformColorDialogHelper>
{
public:
	QWindowsColorDialogHelper() : m_currentColor(new QColor) {}

	virtual bool supportsNonModalDialog()
	{
		return false;
	}

	virtual QColor currentColor() const { return *m_currentColor; }
	virtual void setCurrentColor(const QColor &c) { *m_currentColor = c; }

private:
	inline QWindowsNativeColorDialog *nativeFileDialog() const
	{
		return static_cast<QWindowsNativeColorDialog *>(nativeDialog());
	}
	virtual QWindowsNativeDialogBase *createNativeDialog();

	SharedPointerColor m_currentColor;
};

#endif // USE_NATIVE_COLOR_DIALOG



QT_END_NAMESPACE

#endif // QWINDOWSDIALOGHELPER_H
