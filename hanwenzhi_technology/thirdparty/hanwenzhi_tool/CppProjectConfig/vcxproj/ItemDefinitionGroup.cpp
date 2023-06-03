#include "stdafx.h"
#include "ItemDefinitionGroup.h"





void AdditionalLibraryDirectories_dll_exe(CString& strFileContent)
{
	CString strTagBegin = "<AdditionalLibraryDirectories>";
	CString strCenter = "$(SolutionDir)lib\\$(Configuration)\\";
	CString strTagEnd = "</AdditionalLibraryDirectories>";
	CString strNew = strTagBegin + strCenter + strTagEnd;
	CStringArray arrReturn;
	sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		strFileContent.Replace(strTemp, strNew);
	}
}

void AssemblerListingLocation(CString& strFileContent)
{
	CString strTagBegin = "<AssemblerListingLocation>";
	CString strTagEnd = "</AssemblerListingLocation>";
	CStringArray arrReturn;
	sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		strFileContent.Replace(strTemp, "");
	}
}

//<ObjectFileName>$(IntDir)</ObjectFileName>
void ObjectFileName(CString& strFileContent)
{
	CString strTagBegin = "<ObjectFileName>";
	CString strTagEnd = "</ObjectFileName>";
	CStringArray arrReturn;
	sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		strFileContent.Replace(strTemp, "");
	}
}

void OutputFile(CString& strFileContent)
{
	CString strTagBegin = "<OutputFile>";
	CString strTagEnd = "</OutputFile>";
	CStringArray arrReturn;
	sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		strFileContent.Replace(strTemp, "");
	}
}

void ProgramDataBaseFile(CString& strFileContent)
{
	CString strTagBegin = "<ProgramDataBaseFile>";
	CString strTagEnd = "</ProgramDataBaseFile>";
	CStringArray arrReturn;
	sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		strFileContent.Replace(strTemp, "");
	}

	CString strTagBegin1 = "<ProgramDatabaseFile>";
	CString strTagEnd1 = "</ProgramDatabaseFile>";
	CStringArray arrReturn1;
	sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin1, strTagEnd1, arrReturn1);
	for (int index = 0; index < arrReturn1.GetCount(); index++)
	{
		CString strTemp = arrReturn1.GetAt(index);
		strFileContent.Replace(strTemp, "");
	}
}

void ProgramDataBaseFileName(CString& strFileContent)
{
	CString strTagBegin = "<ProgramDataBaseFileName>";
	CString strTagEnd = "</ProgramDataBaseFileName>";
	CStringArray arrReturn;
	sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		strFileContent.Replace(strTemp, "");
	}
}

void ImportLibrary_dll(CString& strFileContent)
{
	CString strTagBegin = "<ImportLibrary>";
	CString strCenter = "$(SolutionDir)lib\\$(Configuration)\\$(TargetName).lib";
	CString strTagEnd = "</ImportLibrary>";
	CString strNew = strTagBegin + strCenter + strTagEnd;
	CStringArray arrReturn;
	sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		strFileContent.Replace(strTemp, strNew);
	}
}

void ImportLibrary_exe(CString& strFileContent)
{
	CString strTagBegin = "<ImportLibrary>";
	CString strTagEnd = "</ImportLibrary>";
	CStringArray arrReturn;
	sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		strFileContent.Replace(strTemp, "");
	}
}

void PrecompiledHeaderOutputFile(CString& strFileContent)
{
	CString strTagBegin = "<PrecompiledHeaderOutputFile>";
	CString strTagEnd = "</PrecompiledHeaderOutputFile>";
	CStringArray arrReturn;
	sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		strFileContent.Replace(strTemp, "");
	}
}

void TypeLibraryName(CString& strFileContent)
{
	CString strTagBegin = "<TypeLibraryName>";
	CString strTagEnd = "</TypeLibraryName>";
	CStringArray arrReturn;
	sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		strFileContent.Replace(strTemp, "");
	}
}