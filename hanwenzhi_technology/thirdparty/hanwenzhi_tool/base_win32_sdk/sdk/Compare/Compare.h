#ifndef _H_COMPARE_B32D51F2_A935_4EA1_9823_AB52CB6ECC1C
#define _H_COMPARE_B32D51F2_A935_4EA1_9823_AB52CB6ECC1C

namespace sdk
{
	namespace compare
	{
		//返回3个中最小的
		template <class T>	
		T Min(T a, T b,T c)
		{
			if(a<b)													
				b=a;
			return b<c?b:c;	
		}

		//返回3个中最大的
		template <class T>	
		T Max(T a, T b,T c)
		{
			if(a>b)													
				b=a;
			return b>c?b:c;	
		}



	}
}


#endif