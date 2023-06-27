/*
 Copyright (c) 2004-2010 TrueCrypt Developers Association. All rights reserved.

 Governed by the TrueCrypt License 3.0 the full text of which is contained in
 the file License.txt included in TrueCrypt binary and source code distribution
 packages.
*/

#ifndef _H_REGISTRY_D8ED593A_F400_4F07_A4B1_04FE0C79C809
#define _H_REGISTRY_D8ED593A_F400_4F07_A4B1_04FE0C79C809

namespace sdk
{
	namespace registry
	{

		BOOL ReadLocalMachineRegistryDword (char *subKey, char *name, DWORD *value);
		BOOL ReadLocalMachineRegistryMultiString (char *subKey, char *name, char *value, DWORD *size);
		BOOL ReadLocalMachineRegistryString (const char *subKey, char *name, char *value, DWORD *size);
		BOOL ReadLocalMachineRegistryStringNonReflected (const char *subKey, char *name, char *str, DWORD *size);
		BOOL WriteLocalMachineRegistryDword (char *subKey, char *name, DWORD value);
		BOOL WriteLocalMachineRegistryMultiString (char *subKey, char *name, char *multiString, DWORD size);
		BOOL WriteLocalMachineRegistryString (char *subKey, char *name, char *str, BOOL expandable);

		int ReadRegistryInt (char *subKey, char *name, int defaultValue);
		char *ReadRegistryString (char *subKey, char *name, char *defaultValue, char *str, int maxLen);
		DWORD ReadRegistryBytes (char *path, char *name, char *value, int maxLen);
		void WriteRegistryInt (char *subKey, char *name, int value);
		void WriteRegistryString (char *subKey, char *name, char *str);
		BOOL WriteRegistryBytes (char *path, char *name, char *str, DWORD size);

		BOOL DeleteLocalMachineRegistryKey (char *parentKey, char *subKeyToDelete);
		void DeleteRegistryValue (char *subKey, char *name);

		void GetStartupRegKeyName (char *regk);

		

	}
}


#endif



