#ifndef _H_RAND_A7D60E55_991F_474E_B1EA_CC1D1020F1A7
#define _H_RAND_A7D60E55_991F_474E_B1EA_CC1D1020F1A7

namespace sdk
{
	class CRandomUtil
	{
	public:
		CRandomUtil(){};

		
		static int GetRandomInt(int iNum);		//返回0-iNum之间的随机数
		static double GetRand(double MIN, double MAX);
		static CString GenerateGUID();

		int GenerateRand(int nMin, int nMax);


	};



}


#endif