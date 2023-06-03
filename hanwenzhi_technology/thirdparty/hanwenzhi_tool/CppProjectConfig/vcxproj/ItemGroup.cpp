#include "stdafx.h"
#include "ItemGroup.h"



//<CustomBuild Include="D:\hanwenzhi_code\zlib\backup\zlib-1.2.12\CMakeLists.txt"></CustomBuild>
void ItemGroup_Process_CMakeLists(CString& strFileContent)
{
	CString strTagBegin = "<CustomBuild";
	CString strTagEnd = "</CustomBuild>";
	CStringArray arrReturn;
	sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
	for (int index=0; index<arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		if (strTemp.Find("CMakeLists.txt") != -1)
		{
			strFileContent.Replace(strTemp, "");
		}
	}
}

//<ProjectReference Include="D:\hanwenzhi_code\zlib\backup\zlib-1.2.12\ZERO_CHECK.vcxproj"></ProjectReference>
void ItemGroup_ProjectReference(CString& strFileContent)
{
	CString strTagBegin = "<ProjectReference";
	CString strTagEnd = "</ProjectReference>";
	CStringArray arrReturn;
	sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		strFileContent.Replace(strTemp, "");
	}
}