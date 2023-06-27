#pragma  once
//#include "stdafx.h"

typedef unsigned char *POINTER;

typedef unsigned short int UINT2;

typedef unsigned long int UINT4;

typedef struct {
	UINT4 state[4];                                   /* state (ABCD) */
	UINT4 count[2];									  /* number of bits, modulo 2^64 (lsb first) */
	unsigned char buffer[64];                         /* input buffer */
} MD5_CTX;


void MD5Init (MD5_CTX *);
void MD5Update (MD5_CTX *, unsigned char *, unsigned int);
void MD5Final (unsigned char [16], MD5_CTX *);
void MD5Transform (UINT4 [4], unsigned char [64]);
void Encode(unsigned char *, UINT4 *, unsigned int);
void Decode (UINT4 *, unsigned char *, unsigned int);
void MD5_memcpy (POINTER, POINTER, unsigned int);
void MD5_memset (POINTER, int, unsigned int);


namespace sdk
{
	class AFX_EXT_CLASS CMd5Util
	{
	public:
		CMd5Util(){};


		static string GetMD5(const string &buf);
	};



}


