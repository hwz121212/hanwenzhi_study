#ifndef _H_CBASE64_96A58D86_E68F_4204_A9A9_5801402FE788
#define _H_CBASE64_96A58D86_E68F_4204_A9A9_5801402FE788


namespace sdk
{
	class AFX_EXT_CLASS CBase64
	{
	public:

		static char *Encrypt(const char * srcp, int len, char * dstp);
		static void *Decrypt(const char * srcp, int len, char * dstp);
		static size_t B64_length(size_t len);
		static size_t Ascii_length(size_t len);
	};
}

#endif
