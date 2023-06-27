#include "stdafx.h"
#include "Huffman.h"

namespace sdk
{
typedef struct _tagFileHeader
{
	char szSignature[7];
	DWORD dwNumOfBitsOfLastByte;	// ��������һ���ֽ����õı���λ��
	DWORD WeightTable[ 256 ];	   // �����

	_tagFileHeader()
	{
		strcpy_s(szSignature, 7, SZ_SIGNATURE);
	}

}
FILE_HEADER;

CHuffman::CHuffman(void)
{
}


CHuffman::~CHuffman(void)
{
}

//ȷ�Ͻ�ѹ��Ŀ���ļ��Ƿ�Ϊ��ȷ��ѹ���ļ�
bool CHuffman::Check(const char* buffer)
{
	FILE_HEADER *pFileHeader = (FILE_HEADER*)buffer;
	if (strcmp(pFileHeader->szSignature, SZ_SIGNATURE) != 0)
	{
		return false;
	}

	return true;
}

/*
 *
 * ��ȡ��ʼ�ַ�����huffman��
 * ������
 *      buffer �����ַ��ԭʼ�ַ�����
 * ���أ�
 *      ������huffman���ɹ����򷵻�true��
 */
bool CHuffman::InitWithOriginalBuffer(const char* buffer, int len)
{
	m_drOperaLength = len;
	m_strOperatChar = new char[m_drOperaLength];
	for (int i=0; i<m_drOperaLength; i++)
	{
		m_strOperatChar[i] = buffer[i];
	}
	//���Ԥ��ѹ���ַ�������С���ļ�ͷ���ȣ�����false
	if (len <= sizeof(FILE_HEADER))
	{
		return FALSE;
	}
	const char* pStr = buffer;
	FILE_HEADER *pFileHeader = (FILE_HEADER*)pStr;
	//����ַ�����ͷ����BONREE������false
	if (strcmp(pFileHeader->szSignature, SZ_SIGNATURE) != 0)
	{
		return FALSE;
	}

	//�ؽ���������
	typedef CHuffmanTree::HT_NODE HT_NODE;
	vector<HT_NODE> NodeList;
	//��Ȩֵ��Ϊ0�����ݸ�ֵ��NodeList
	for (int i=0; i<256; ++i)
	{
		if (pFileHeader->WeightTable[i] != 0)
		{
			NodeList.push_back(HT_NODE(i, pFileHeader->WeightTable[i]));
		}
	}

	Ht.CreateHuffmanTree(NodeList);
	return TRUE;
}

/*
 *
 * ��ȡ����ѹ�����huffman��
 * ������
 *      buffer �����ַ��ѹ������ַ�����
 * ���أ�
 *      ������huffman���ɹ����򷵻�true��
 */
bool CHuffman::InitWithEncodedBuffer(const char* buffer, int len)
{
	m_strOperatChar = new char[len];
	memcpy(m_strOperatChar, buffer, len);
	m_drOperaLength = len;
	ZeroMemory(&m_WeightTable, sizeof(m_WeightTable));//���Ȩֵ��
	const char* pNode = m_strOperatChar;
	const char* pEnd = m_strOperatChar + len - 1;
	//��¼�ܹ����ֵ��ַ�����������Ϊ0ʱ����false
	int valueNum = 0;
	//��ȡ�����ַ��ĳ��ִ�����Ȩֵ
	for (; pNode<=pEnd; ++pNode)
	{
		valueNum++;
		++m_WeightTable[(unsigned char)*pNode];
	}
	//�ַ���Ϊ��ֵʱ
	if (valueNum == 0)
	{
		return FALSE;
	}

	typedef CHuffmanTree::HT_NODE HT_NODE;
	vector<HT_NODE> ELemList;
	for (int i=0; i<256; ++i)
	{
		//��Ȩֵ��Ϊ0��������elemlist����
		if (m_WeightTable[i] != 0)
		{
			ELemList.push_back(HT_NODE(i, m_WeightTable[i]));
		}
	}

	//������������
	m_Ht.CreateHuffmanTree(ELemList);
	// ȡ��ӳ��
	map<unsigned char, string> Mapping;
	m_Ht.GetMapping(&Mapping);
	// ת��ӳ��Ϊֱ�Ӷ�ַ��
	for (map<unsigned char, string>::const_iterator it=Mapping.begin(); 
		it != Mapping.end();
		++it)
	{
		m_EncodingTable[ it->first ].clear();
		for (unsigned int i=0; i<it->second.length(); ++i)
		{
			m_EncodingTable[it->first].push_back(it->second[i] - '0'); 
		}

	}

	return true;
}


/*
 *
 * ��ȡ��ѹ������ַ�������
 * ���أ�
 *      ���ؽ�ѹ������ַ�������
 */
int CHuffman::CalcEncodedBufferLength()
{	
	//��Ԥ������ַ���
	if ((m_strOperatChar == NULL) || (m_drOperaLength == 0))
	{
		return -1;
	}
	const char* pBen = m_strOperatChar;
	char* pEnd = m_strOperatChar + m_drOperaLength;
	int NumOfBits = 0;
	//ͳ��ѹ����Ҫ�ĳ���
	for (const char* pIt=pBen; pIt!=pEnd; ++pIt)
	{
		NumOfBits += m_EncodingTable[(unsigned char)*pIt].size();
	}

	m_nNumOfBitsOfLastByte = NumOfBits%8;
	m_nBytesNeeded = m_nNumOfBitsOfLastByte == 0 ? 0:1;
	m_nBytesNeeded += NumOfBits/8;
	m_nBytesNeeded += sizeof(FILE_HEADER);
	return m_nBytesNeeded;
}

/*
 *
 * ��ȡѹ������ַ�������
 * ���أ�
 *      ����ѹ������ַ�������
 */
int CHuffman::CalcDecodedBufferLength()
{
	char *pBen = m_strOperatChar;
	FILE_HEADER *pFileHeader = (FILE_HEADER*)pBen;
	pBen += sizeof(FILE_HEADER);
	//��Ҫ�ĳ�������Ϊ0
	m_nBytesNeeded = 0;
	//�������������ڵ�
	CHuffmanTree::HT_NODE *pFirstNode = Ht.GetHtRoot();
	//����8λ
	char charBitWith[9] = {(char)128, (char)64, (char)32, (char)16, (char)8, (char)4, (char)2, (char)1};
	char chNode;
	for (; pBen<(m_strOperatChar+m_drOperaLength-1); ++pBen)
	{
		for (int i=0; i<8; ++i)
		{
			chNode = charBitWith[i] & *pBen;
			if (chNode == 0)
			{
				pFirstNode = pFirstNode->pLeft;
			}
			else
			{
				pFirstNode = pFirstNode->pRight;
			}

			if ((pFirstNode->pLeft == 0)&&(pFirstNode->pRight == 0))
			{
				m_nBytesNeeded++;
				pFirstNode = Ht.GetHtRoot();
			}

		}
	}
	for (unsigned int i=0; i<pFileHeader->dwNumOfBitsOfLastByte; ++i)
	{
		chNode = charBitWith[i]&*pBen;
		if (chNode == 0)
		{
			pFirstNode = pFirstNode->pLeft;
		}
		else
		{
			pFirstNode = pFirstNode->pRight;
		}

		if ((pFirstNode->pLeft == 0)&&(pFirstNode->pRight == 0))
		{
			m_nBytesNeeded++;
			pFirstNode = Ht.GetHtRoot();
		}

	}

	return m_nBytesNeeded;
}

/*
 *
 * ѹ���ļ�
 * ������
 *      buffer �����ַ��Ϊѹ�������Ϣ��
 *      length ѹ����ĳ���
 * ���أ�
 *      ��ѹ���ɹ�������true��
 */
bool CHuffman::Encode(char* buffer, int* length)
{
	//���buf
	ZeroMemory(buffer, *length);
	//��Ԥ������ַ���
	if ((m_strOperatChar == NULL) || (m_drOperaLength == 0))
	{
		return FALSE;
	}

	int numLength = sizeof(FILE_HEADER);
	char *pDst = buffer + numLength;
	const char *pBen = m_strOperatChar;
	const char *pEnd = m_strOperatChar + m_drOperaLength;
	int nBitPos = 7;
	int ggfg = 0;
	for (const char* pIt=pBen; pIt!=pEnd; ++pIt)
	{
		const vector<int> &Encoded = m_EncodingTable[(unsigned char)(*pIt)];
		for (unsigned int i=0; i<Encoded.size(); ++i)
		{
			if (nBitPos < 0)
			{
				ggfg++;
				nBitPos = 7;
				++pDst;
			}
			*pDst |= (Encoded[ i ]) << nBitPos;
			nBitPos--; 
		}

	}

	//��ϳ������ַ���
	FILE_HEADER stFileHeader;
	stFileHeader.dwNumOfBitsOfLastByte = 8 - nBitPos - 1;
	//����Ȩֵ��
	for (int i=0; i<256; ++i)
	{
		stFileHeader.WeightTable[i] = m_WeightTable[i];
	}

	pDst = buffer;
	memcpy(pDst, &stFileHeader, sizeof(stFileHeader));
	//����ַ�������
	if (m_strOperatChar != NULL)
	{
		delete [] m_strOperatChar;
		m_strOperatChar = NULL;
	}

	return TRUE;
}

/*
 *
 * ��ѹ���ļ�
 * ������
 *      buffer �����ַ��Ϊ��ѹ�������Ϣ��
 *      length ��ѹ����ĳ���
 * ���أ�
 *      ����ѹ���ɹ�������true��
 */
bool CHuffman::Decode(char* buffer, int* length)
{
	char *pBen = m_strOperatChar;
	FILE_HEADER *pFileHeader = (FILE_HEADER*)pBen;
	pBen += sizeof(FILE_HEADER);
	//��Ҫ�ĳ�������Ϊ0
	m_nBytesNeeded = 0;
	//�������������ڵ�
	CHuffmanTree::HT_NODE *pFirstNode = Ht.GetHtRoot();
	//����8λ
	char charBitWith[8] = {(char)128, (char)64, (char)32, (char)16, (char)8, (char)4, (char)2, (char)1};
	char chNode;
	for (; pBen<(m_strOperatChar+m_drOperaLength-1); ++pBen)
	{
		for (int i=0; i<8; ++i)
		{
			chNode = charBitWith[i] & *pBen;
			if (chNode == 0)
			{
				pFirstNode = pFirstNode->pLeft;
			}
			else
			{
				pFirstNode = pFirstNode->pRight;
			}
			if ((pFirstNode->pLeft == 0) && (pFirstNode->pRight == 0))
			{
				buffer[m_nBytesNeeded] = pFirstNode->Val.byData;
				m_nBytesNeeded++;
				pFirstNode = Ht.GetHtRoot();
			}

		}

	}
	for (unsigned int i=0; i<pFileHeader->dwNumOfBitsOfLastByte; ++i)
	{
		chNode = charBitWith[i]&*pBen;
		if (chNode == 0)
		{
			pFirstNode = pFirstNode->pLeft;
		}
		else
		{
			pFirstNode = pFirstNode->pRight;
		}
		if ((pFirstNode->pLeft == 0) && (pFirstNode->pRight == 0))
		{
			buffer[m_nBytesNeeded] = pFirstNode->Val.byData;
			m_nBytesNeeded++;
			pFirstNode = Ht.GetHtRoot();
		}

	}
	if (*length != m_nBytesNeeded)
	{
		return FALSE;
	}

	//����ַ�������
	if (m_strOperatChar != NULL)
	{
		delete [] m_strOperatChar;
		m_strOperatChar = NULL;
	}

	return true;
}

} 
