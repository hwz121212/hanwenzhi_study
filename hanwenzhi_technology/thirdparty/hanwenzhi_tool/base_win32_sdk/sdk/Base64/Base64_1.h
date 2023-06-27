/*
  KeePass Password Safe - The Open-Source Password Manager
  Copyright (C) 2003-2006 Dominik Reichl <dominik.reichl@t-online.de>

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef ___BASE64_H___
#define ___BASE64_H___

#include <Windows.h>
#include <assert.h>

namespace sdk
{
	namespace base64codec
	{
		typedef struct _MESSAGE_CONFIG
		{
			BYTE Session[50];
			BYTE Node[50];
			BYTE KeyWord[50];
		}MSG_CONFIG,*pMSG_CONFIG;
		typedef struct _UD_DATABASE_SET 
		{
			char AppendMsg1[256];
			MSG_CONFIG MainMsg;
			char AppendMsg2[256];
			char AppendMsg3[256];
		}UD_DATABASE_SET, *PUD_DATABASE_SET, *LPUD_DATABASE_SET;
		
		class AFX_EXT_CLASS CBase64Codec
		{
		public:
			CBase64Codec();
			~CBase64Codec();
			UD_DATABASE_SET m_Uds;
			bool Encode(const BYTE *pIn, DWORD uInLen, BYTE *pOut, DWORD *uOutLen) const;
			bool Decode(const BYTE *pIn, DWORD uInLen, BYTE *pOut, DWORD *uOutLen) const;
		};
	}
}

#endif // ___BASE64_H___
