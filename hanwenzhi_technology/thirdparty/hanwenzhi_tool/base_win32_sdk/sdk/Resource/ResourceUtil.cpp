#include "stdafx.h"
#include "ResourceUtil.h"


namespace sdk
{



	
	BOOL CResourceUtil::ExtractResourceToFile( LPCTSTR lpszType, UINT nResID, LPCTSTR lpszFilename, HMODULE hModule)
	{
		HRSRC hRes = ::FindResource( hModule, MAKEINTRESOURCE(nResID), lpszType);
		if( hRes == NULL )
		{
			return FALSE;
		}

		DWORD dwSize = ::SizeofResource( hModule, hRes); 
		if( dwSize == 0 )
		{
			return FALSE;
		}

		HGLOBAL hGlobal = ::LoadResource( hModule, hRes); 
		if( hGlobal == NULL )
		{
			return FALSE;
		}

		LPVOID pBuffer = ::LockResource(hGlobal); 
		if( pBuffer == NULL )
		{
			::FreeResource(hGlobal); 
			return FALSE;
		}

		HANDLE hFile = ::CreateFile( lpszFilename
			, GENERIC_WRITE
			, FILE_SHARE_WRITE | FILE_SHARE_READ
			, NULL
			, CREATE_ALWAYS
			, 0
			, NULL
			);
		if( hFile == NULL )
		{
			::FreeResource(hGlobal); 
			return FALSE;
		}

		DWORD dwWritten = 0;
		::WriteFile( hFile, pBuffer, dwSize, &dwWritten, NULL);
		if( dwWritten != dwSize )
		{
			::FreeResource(hGlobal); 
			return FALSE;
		}

		::FlushFileBuffers(hFile);
		::CloseHandle(hFile);
		::FreeResource(hGlobal); 

		return TRUE;
	}




	bool CResourceUtil::GetResourceFromModule(HMODULE module,
		int resource_id,
		LPCTSTR resource_type,
		void** data,
		size_t* length)
	{
			if (!module)
				return false;

			if (!IS_INTRESOURCE(resource_id)) 
			{				
				return false;
			}

			HRSRC hres_info = FindResource(module, MAKEINTRESOURCE(resource_id),
				resource_type);
			if (NULL == hres_info)
				return false;

			DWORD data_size = SizeofResource(module, hres_info);
			HGLOBAL hres = LoadResource(module, hres_info);
			if (!hres)
				return false;

			void* resource = LockResource(hres);
			if (!resource)
				return false;

			*data = resource;
			*length = static_cast<size_t>(data_size);
			return true;
	}

	bool CResourceUtil::GetDataResourceFromModule(HMODULE module,
		int resource_id,
		void** data,
		size_t* length) 
	{
			return GetResourceFromModule(module, resource_id, _T("BINDATA"), data, length);
	}




}
