#ifndef _H_COMPARE_B32D51F2_A935_4EA1_9823_AB52CB6ECC1C
#define _H_COMPARE_B32D51F2_A935_4EA1_9823_AB52CB6ECC1C

namespace sdk
{
	namespace compare
	{
		//����3������С��
		template <class T>	
		T Min(T a, T b,T c)
		{
			if(a<b)													
				b=a;
			return b<c?b:c;	
		}

		//����3��������
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