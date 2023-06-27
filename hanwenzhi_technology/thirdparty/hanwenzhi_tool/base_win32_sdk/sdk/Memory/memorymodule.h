#ifndef _H_MEMORYMODULE_FA17360C_DB47_486A_977F_C508AD4A8E3D
#define _H_MEMORYMODULE_FA17360C_DB47_486A_977F_C508AD4A8E3D



namespace sdk
{
	
	class AFX_EXT_CLASS CMemoryUtil
	{
	public:
		CMemoryUtil(){};




		typedef void *HMEMORYMODULE;

		HMEMORYMODULE MemoryLoadLibrary(const void *);
		FARPROC MemoryGetProcAddress(HMEMORYMODULE, const char *);
		void MemoryFreeLibrary(HMEMORYMODULE);

	};
				

	
		
	
}


#endif
