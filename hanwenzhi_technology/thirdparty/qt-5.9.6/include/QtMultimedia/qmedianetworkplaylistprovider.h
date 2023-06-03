#ifndef QMEDIANETWORKPAYLISTPROVIDER_H
#define QMEDIANETWORKPAYLISTPROVIDER_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API. It exists purely as an
// implementation detail. This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include "qmediaplaylistprovider_p.h"

QT_BEGIN_NAMESPACE


class QMediaNetworkPlaylistProviderPrivate;
class Q_MULTIMEDIA_EXPORT QMediaNetworkPlaylistProvider : public QMediaPlaylistProvider
{
    Q_OBJECT
public:
    QMediaNetworkPlaylistProvider(QObject *parent=0);
    ~QMediaNetworkPlaylistProvider();

    bool load(const QNetworkRequest &request, const char *format = 0) override;

    int mediaCount() const override;
    QMediaContent media(int pos) const override;

    bool isReadOnly() const override;

    bool addMedia(const QMediaContent &content) override;
    bool addMedia(const QList<QMediaContent> &items) override;
    bool insertMedia(int pos, const QMediaContent &content) override;
    bool insertMedia(int pos, const QList<QMediaContent> &items) override;
    bool moveMedia(int from, int to) override;
    bool removeMedia(int pos) override;
    bool removeMedia(int start, int end) override;
    bool clear() override;

public Q_SLOTS:
    void shuffle() override;

private:
    Q_DISABLE_COPY(QMediaNetworkPlaylistProvider)
    Q_DECLARE_PRIVATE(QMediaNetworkPlaylistProvider)
    Q_PRIVATE_SLOT(d_func(), void _q_handleParserError(QPlaylistFileParser::ParserError err, const QString &))
    Q_PRIVATE_SLOT(d_func(), void _q_handleNewItem(const QVariant& content))
};


QT_END_NAMESPACE


#endif // QMEDIANETWORKPAYLISTSOURCE_H
