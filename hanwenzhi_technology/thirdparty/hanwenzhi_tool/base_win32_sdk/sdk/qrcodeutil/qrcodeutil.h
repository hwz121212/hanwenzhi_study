#pragma once





namespace sdk
{
	namespace qrcodeutil
	{

		int GenerateBMP(const CString& str, const CString& strBmpFile, int iSize);

		bool  sdkCreate192WidthQrcodeBmp(char *qrcode, char *despath);
		bool  sdkCreate192WidthQrcodeBmp_stretch(char *qrcode, char *despath);
		bool  sdkCreate384WidthQrcodeBmp(char *qrcode, char *despath);
		
	}

}
