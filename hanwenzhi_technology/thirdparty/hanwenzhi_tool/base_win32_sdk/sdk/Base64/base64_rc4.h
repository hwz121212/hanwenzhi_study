#ifndef _H_BASE64_RC4_2E208774_DF24_4A42_933D_EAF5AA7CCDF7
#define _H_BASE64_RC4_2E208774_DF24_4A42_933D_EAF5AA7CCDF7

namespace sdk
{
	namespace base64_rc4
	{



		class AFX_EXT_CLASS CBase64
		{
		public:
			CBase64();

			char *Encrypt(const char * srcp, int len, char * dstp);	
			void *Decrypt(const char * srcp, int len, char * dstp);
			size_t B64_length(size_t len);	
			size_t Ascii_length(size_t len);
			
		};


		class AFX_EXT_CLASS CRC4 
		{		
		public:

			CRC4 ();			
			virtual ~CRC4 ();
			char *Encrypt(char *pszText,const char *pszKey);
			char *Decrypt(char *pszText,const char *pszKey);

		private:
			unsigned char sbox[256];      /* Encryption array             */
			unsigned char key[256],k;     /* Numeric key values           */
			int  m, n, i, j, ilen;        /* Ambiguously named counters   */
			
		};

	}
}




#endif