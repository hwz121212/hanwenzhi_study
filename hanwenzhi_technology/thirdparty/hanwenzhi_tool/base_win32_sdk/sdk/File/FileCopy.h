#ifndef _H_FILECOPY_2D34104F_7EEE_4627_AAED_B4956D37ECFA
#define _H_FILECOPY_2D34104F_7EEE_4627_AAED_B4956D37ECFA




#pragma warning(disable : 4786)
#include <vector>
#include <string>
using namespace std;



namespace sdk
{
	namespace filecopy
	{
		
			


		// #define INFILE	"C:\\Users\\Administrator\\AppData\\Local\\Microsoft\\Windows\\WebCache\\WebCacheV01.dat"
		// #define OUTFILE "E:\\out.txt" // Êä³öÎÄ¼þ

		BOOL FileCopy(const char* szInFile, const char* szOutFile);
		


		// System CopyFile() copies source file attributes (like FILE_ATTRIBUTE_ENCRYPTED)
		// so we need to use our own copy function
		BOOL TCCopyFile (char *sourceFileName, char *destinationFile);


	}



}

#endif