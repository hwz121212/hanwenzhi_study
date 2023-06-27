/**
 * huffman�����ѹ������
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
		������	�ͷ��ļ�ӳ����Ҫ��������Դ
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
		������	��ȡ�ļ��Ĵ�С����СΪ4G���¡�
		���أ�	�ɹ����ļ��Ĵ�С
					ʧ�ܣ�INVALID_FILE_SIZE 
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
	 * ȷ���Ƿ�Ϊѹ���ű�
	 * ������
	 *      buffer �����ַ���ļ���Ϣ��
	 * ���أ�
	 *      ��ȷ��Ϊѹ���汾�أ�����true��
	 */
	virtual bool Check(const char* buffer);

	/*
	 *
	 * ��ȡ��ʼ�ַ�����huffman��
	 * ������
	 *      buffer �����ַ��ԭʼ�ַ�����
	 * ���أ�
	 *      ������huffman���ɹ����򷵻�true��
	 */
	virtual bool InitWithOriginalBuffer(const char* buffer, int len);

	/*
	 *
	 * ��ȡѹ������ַ�������
	 * ���أ�
	 *      ���ؽ�ѹ������ַ�������
	 */
	virtual bool InitWithEncodedBuffer(const char* buffer, int len);

	/*
	 *
	 * ��ȡѹ������ַ�������
	 * ���أ�
	 *      ����ѹ������ַ�������
	 */
	virtual int CalcEncodedBufferLength();

	/*
	 *
	 * ��ȡ��ѹ������ַ�������
	 * ���أ�
	 *      ���ؽ�ѹ������ַ�������
	 */
	virtual int CalcDecodedBufferLength();

	/*
	 *
	 * ѹ���ļ�
	 * ������
	 *      buffer �����ַ��Ϊѹ�������Ϣ��
	 *      length ѹ����ĳ���
	 * ���أ�
	 *      ��ѹ���ɹ�������true��
	 */
	virtual bool Encode(char* buffer, int* length);

	/*
	 *
	 * ��ѹ���ļ�
	 * ������
	 *      buffer �����ַ��Ϊ��ѹ�������Ϣ��
	 *      length ��ѹ����ĳ���
	 * ���أ�
	 *      ����ѹ���ɹ�������true��
	 */
	virtual bool Decode(char* buffer, int* length);

private:
	char* m_strOperatChar;               //�������ַ���
	int m_drOperaLength;                 //�������ַ����ĳ���
	int m_nNumOfBitsOfLastByte;	         //��������һ���ֽ����õı���λ��
	int m_nBytesNeeded;	                 //��ѹ��ѹ������ַ�����С
	CHuffmanTree m_Ht;                   //��������
	vector<int> m_EncodingTable[256];    //�����ֱ�Ӷ�ַ����������ֵ��������ֵ��Ӧ������
	unsigned long m_WeightTable[256];    //����Ȩֵ��
	CHuffmanTree Ht;                     //��ϣ����
};

}
