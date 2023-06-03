#pragma once

#include "qradiodata.h"
#include "qmediaservice.h"
#include "qmediaobject_p.h"
#include "qradiodatacontrol.h"


#include <QPair>


QT_BEGIN_NAMESPACE


/*!
	\class QRadioData
	\brief The QRadioData class provides interfaces to the RDS functionality of the system radio.

	\inmodule QtMultimedia
	\ingroup multimedia
	\ingroup multimedia_radio

	The radio data object will emit signals for any changes in radio data. You can enable or disable
	alternative frequency with setAlternativeFrequenciesEnabled().

	You can get a QRadioData instance fromt the \l{QRadioTuner::radioData()}{radioData}
	property from a QRadioTuner instance.

	\snippet multimedia-snippets/media.cpp Radio data setup

	Alternatively, you can pass an instance of QRadioTuner to the constructor to QRadioData.

	\sa {Radio Overview}

*/

class QRadioDataPrivate
{
    Q_DECLARE_NON_CONST_PUBLIC(QRadioData)
public:
    QRadioDataPrivate();

    QMediaObject *mediaObject;
    QRadioDataControl* control;

    void _q_serviceDestroyed();

    QRadioData *q_ptr;
};

QT_END_NAMESPACE

