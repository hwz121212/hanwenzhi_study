#include "stdafx.h"
#include "Huffman.h"

namespace sdk
{
typedef struct _tagFileHeader
{
	char szSignature[7];
	DWORD dwNumOfBitsOfLastByte;	// 编码后，最后一个字节所用的比特位数
	DWORD WeightTable[ 256 ];	   // 编码表

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

//确认解压缩目标文件是否为正确的压缩文件
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
 * 获取初始字符串的huffman树
 * 参数：
 *      buffer 缓冲地址，原始字符串。
 * 返回：
 *      若生成huffman树成功，则返回true。
 */
bool CHuffman::InitWithOriginalBuffer(const char* buffer, int len)
{
	m_drOperaLength = len;
	m_strOperatChar = new char[m_drOperaLength];
	for (int i=0; i<m_drOperaLength; i++)
	{
		m_strOperatChar[i] = buffer[i];
	}
	//如果预解压缩字符串长度小于文件头长度，返回false
	if (len <= sizeof(FILE_HEADER))
	{
		return FALSE;
	}
	const char* pStr = buffer;
	FILE_HEADER *pFileHeader = (FILE_HEADER*)pStr;
	//如果字符串开头不是BONREE，返回false
	if (strcmp(pFileHeader->szSignature, SZ_SIGNATURE) != 0)
	{
		return FALSE;
	}

	//重建哈弗曼树
	typedef CHuffmanTree::HT_NODE HT_NODE;
	vector<HT_NODE> NodeList;
	//将权值不为0的数据赋值于NodeList
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
 * 获取经解压缩后的huffman树
 * 参数：
 *      buffer 缓冲地址，压缩后的字符串。
 * 返回：
 *      若生成huffman树成功，则返回true。
 */
bool CHuffman::InitWithEncodedBuffer(const char* buffer, int len)
{
	m_strOperatChar = new char[len];
	memcpy(m_strOperatChar, buffer, len);
	m_drOperaLength = len;
	ZeroMemory(&m_WeightTable, sizeof(m_WeightTable));//清空权值表
	const char* pNode = m_strOperatChar;
	const char* pEnd = m_strOperatChar + len - 1;
	//记录总共出现的字符个数，个数为0时返回false
	int valueNum = 0;
	//获取各个字符的出现次数即权值
	for (; pNode<=pEnd; ++pNode)
	{
		valueNum++;
		++m_WeightTable[(unsigned char)*pNode];
	}
	//字符串为空值时
	if (valueNum == 0)
	{
		return FALSE;
	}

	typedef CHuffmanTree::HT_NODE HT_NODE;
	vector<HT_NODE> ELemList;
	for (int i=0; i<256; ++i)
	{
		//将权值不为0的数存入elemlist里面
		if (m_WeightTable[i] != 0)
		{
			ELemList.push_back(HT_NODE(i, m_WeightTable[i]));
		}
	}

	//建立哈夫曼树
	m_Ht.CreateHuffmanTree(ELemList);
	// 取得映射
	map<unsigned char, string> Mapping;
	m_Ht.GetMapping(&Mapping);
	// 转换映射为直接定址表
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
 * 获取解压缩后的字符串长度
 * 返回：
 *      返回解压缩后的字符串长度
 */
int CHuffman::CalcEncodedBufferLength()
{	
	//无预处理的字符串
	if ((m_strOperatChar == NULL) || (m_drOperaLength == 0))
	{
		return -1;
	}
	const char* pBen = m_strOperatChar;
	char* pEnd = m_strOperatChar + m_drOperaLength;
	int NumOfBits = 0;
	//统计压缩需要的长度
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
 * 获取压缩后的字符串长度
 * 返回：
 *      返回压缩后的字符串长度
 */
int CHuffman::CalcDecodedBufferLength()
{
	char *pBen = m_strOperatChar;
	FILE_HEADER *pFileHeader = (FILE_HEADER*)pBen;
	pBen += sizeof(FILE_HEADER);
	//需要的长度重置为0
	m_nBytesNeeded = 0;
	//哈夫曼树树根节点
	CHuffmanTree::HT_NODE *pFirstNode = Ht.GetHtRoot();
	//设置8位
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
 * 压缩文件
 * 参数：
 *      buffer 缓冲地址，为压缩后的信息。
 *      length 压缩后的长度
 * 返回：
 *      若压缩成功，返回true。
 */
bool CHuffman::Encode(char* buffer, int* length)
{
	//清空buf
	ZeroMemory(buffer, *length);
	//无预处理的字符串
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

	//组合成最后的字符串
	FILE_HEADER stFileHeader;
	stFileHeader.dwNumOfBitsOfLastByte = 8 - nBitPos - 1;
	//放入权值表
	for (int i=0; i<256; ++i)
	{
		stFileHeader.WeightTable[i] = m_WeightTable[i];
	}

	pDst = buffer;
	memcpy(pDst, &stFileHeader, sizeof(stFileHeader));
	//清空字符串缓冲
	if (m_strOperatChar != NULL)
	{
		delete [] m_strOperatChar;
		m_strOperatChar = NULL;
	}

	return TRUE;
}

/*
 *
 * 解压缩文件
 * 参数：
 *      buffer 缓冲地址，为解压缩后的信息。
 *      length 解压缩后的长度
 * 返回：
 *      若解压缩成功，返回true。
 */
bool CHuffman::Decode(char* buffer, int* length)
{
	char *pBen = m_strOperatChar;
	FILE_HEADER *pFileHeader = (FILE_HEADER*)pBen;
	pBen += sizeof(FILE_HEADER);
	//需要的长度重置为0
	m_nBytesNeeded = 0;
	//哈夫曼树树根节点
	CHuffmanTree::HT_NODE *pFirstNode = Ht.GetHtRoot();
	//设置8位
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

	//清空字符串缓冲
	if (m_strOperatChar != NULL)
	{
		delete [] m_strOperatChar;
		m_strOperatChar = NULL;
	}

	return true;
}

} 
