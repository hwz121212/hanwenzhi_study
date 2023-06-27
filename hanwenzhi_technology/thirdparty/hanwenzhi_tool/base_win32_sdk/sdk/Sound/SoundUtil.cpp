#include "stdafx.h"
#include "SoundUtil.h"



namespace sdk
{
	void CSoundUtil::PlayBeepSound()
	{
		MessageBeep (0xFFFFFFFF);
	}

}