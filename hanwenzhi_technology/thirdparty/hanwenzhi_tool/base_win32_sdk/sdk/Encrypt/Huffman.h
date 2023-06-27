/**
 * huffman编码解压缩操作
 */
#pragma once

#include <windows.h>
#include <WinDef.h>
#include <tchar.h>
#include "huffmantree.h"

#define SZ_SIGNATURE "BONREE"

namespace sdk
{

class CFileMapping
{
public:
	// constructor
	CFileMapping(void)
	{
		m_hFile = INVALID_HANDLE_VALUE; 
		m_hMap = NULL;
		m_pBase = NULL;
		m_dwFileSize = 0;
	}

	// destructor
	~CFileMapping(void)
	{
		ReleaseResources() ;
	}

	/*
		描述：	释放文件映射需要的所有资源
	*/
	void ReleaseResources()
	{
		if (m_pBase)
		{
			::UnmapViewOfFile(m_pBase);
			m_pBase = NULL; 
		}

		if (m_hMap)
		{
			::CloseHandle(m_hMap); 
			m_hMap = NULL; 
		}

		if (m_hFile != INVALID_HANDLE_VALUE)
		{
			::CloseHandle(m_hFile); 
			m_hFile = INVALID_HANDLE_VALUE; 
		}

		m_dwFileSize = 0;
	}

	/*
		描述：	获取文件的大小。大小为4G以下。
		返回：	成功，文件的大小
					失败，INVALID_FILE_SIZE 
	*/
	static DWORD GetFileSize(const TCHAR *pszFilePath)
	{
		HANDLE hFile ; 
		hFile = ::CreateFile(pszFilePath, 
			GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, 
			NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);

		if (hFile == INVALID_HANDLE_VALUE) return  INVALID_FILE_SIZE ;
 
		DWORD dwFileSize = ::GetFileSize(hFile , NULL);
		::CloseHandle(hFile);
		return dwFileSize;
	}

	DWORD GetFileSize() const 
	{
		return m_dwFileSize;
	}

protected:
		HANDLE m_hFile; 
		HANDLE m_hMap; 
		PBYTE m_pBase;
		DWORD m_dwFileSize;
};


class  AFX_EXT_CLASS CHuffman
{
public:
	CHuffman(void);
	virtual ~CHuffman(void);

	/*
	 *
	 * 确认是否为压缩脚本
	 * 参数：
	 *      buffer 缓冲地址，文件信息。
	 * 返回：
	 *      若确定为压缩版本呢，返回true。
	 */
	virtual bool Check(const char* buffer);

	/*
	 *
	 * 获取初始字符串的huffman树
	 * 参数：
	 *      buffer 缓冲地址，原始字符串。
	 * 返回：
	 *      若生成huffman树成功，则返回true。
	 */
	virtual bool InitWithOriginalBuffer(const char* buffer, int len);

	/*
	 *
	 * 获取压缩后的字符串长度
	 * 返回：
	 *      返回解压缩后的字符串长度
	 */
	virtual bool InitWithEncodedBuffer(const char* buffer, int len);

	/*
	 *
	 * 获取压缩后的字符串长度
	 * 返回：
	 *      返回压缩后的字符串长度
	 */
	virtual int CalcEncodedBufferLength();

	/*
	 *
	 * 获取解压缩后的字符串长度
	 * 返回：
	 *      返回解压缩后的字符串长度
	 */
	virtual int CalcDecodedBufferLength();

	/*
	 *
	 * 压缩文件
	 * 参数：
	 *      buffer 缓冲地址，为压缩后的信息。
	 *      length 压缩后的长度
	 * 返回：
	 *      若压缩成功，返回true。
	 */
	virtual bool Encode(char* buffer, int* length);

	/*
	 *
	 * 解压缩文件
	 * 参数：
	 *      buffer 缓冲地址，为解压缩后的信息。
	 *      length 解压缩后的长度
	 * 返回：
	 *      若解压缩成功，返回true。
	 */
	virtual bool Decode(char* buffer, int* length);

private:
	char* m_strOperatChar;               //欲处理字符串
	int m_drOperaLength;                 //欲处理字符串的长度
	int m_nNumOfBitsOfLastByte;	         //编码后，最后一个字节所用的比特位数
	int m_nBytesNeeded;	                 //解压或压缩后的字符串大小
	CHuffmanTree m_Ht;                   //哈夫曼树
	vector<int> m_EncodingTable[256];    //编码表。直接定址，索引即是值。内容是值对应的数据
	unsigned long m_WeightTable[256];    //数据权值表
	CHuffmanTree Ht;                     //哈希曼树
};

}
