#ifndef _H_RESOURCEUTIL_2C172016_1041_4E52_AC69_5E150767DD20
#define _H_RESOURCEUTIL_2C172016_1041_4E52_AC69_5E150767DD20


namespace sdk
{
	class AFX_EXT_CLASS CResourceUtil
	{
	public:
		
		static BOOL ExtractResourceToFile( LPCTSTR lpszType, UINT nResID, LPCTSTR lpszFilename, HMODULE hModule);


		static bool GetResourceFromModule(HMODULE module,
			int resource_id,
			LPCTSTR resource_type,
			void** data,
			size_t* length);
	

		static bool GetDataResourceFromModule(HMODULE module,
			int resource_id,
			void** data,
			size_t* length);
		
	};
}

#endif