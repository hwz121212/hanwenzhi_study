#include "stdafx.h"
#include "Rand.h"

#include<time.h>



int CRandomUtil::GetRandomInt(int iNum)
{			
	srand((unsigned int)time(NULL));
	int iRandom = rand() * iNum /RAND_MAX;
	if (iRandom == iNum)
	{
		--iRandom;
	}			
	return iRandom;
}

double CRandomUtil::GetRand(double MIN, double MAX)
{
	srand((unsigned)time(NULL));	
	double fMax = RAND_MAX;
	return (double)(rand()*(MAX-MIN)/fMax + MIN);
}


int CRandomUtil::GenerateRand(int nMin, int nMax)
{
	if (nMin == nMax)
	{
		return nMin;
	}

	srand((int)GetTickCount());

	int minInteger = (int)(nMin * 10000);
	int maxInteger = (int)(nMax * 10000);
	int randInteger = rand()*rand();
	int diffInteger = maxInteger - minInteger;
	if (0 == diffInteger)
	{
		return nMin;
	}

	int resultInteger = randInteger % diffInteger + minInteger;
	int nRet = (resultInteger/10000);
	if (nRet >= nMax)
		nRet --;

	return nRet;
}

CString  CRandomUtil::GenerateGUID()
{
	GUID guid;
	CoCreateGuid(&guid);

	TCHAR szBuffer[250];
	wsprintf(
		szBuffer, 
		"%04X-%02X-%02X-%02X%02X-%02X%02X%02X%02X%02X%02X",
		guid.Data1, 
		guid.Data2, 
		guid.Data3,
		guid.Data4[0], guid.Data4[1],
		guid.Data4[2], guid.Data4[3], guid.Data4[4], guid.Data4[5], guid.Data4[6], guid.Data4[7]
	);

	return szBuffer;
}


