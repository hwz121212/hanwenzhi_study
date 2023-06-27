#pragma once

#include <list>
#include <vector>
#include <map>
#include <string>
using namespace std ;

class CHuffmanTree
{
public:
	CHuffmanTree(void) : m_pHtRoot(0)
	{

	}

	~CHuffmanTree(void)
	{
		DeleteSubtree(m_pHtRoot); 
	}

public :
	// 哈夫曼树节点结构
	typedef struct _tagHtNode
	{
		_tagHtNode( unsigned char byData , unsigned long dwWeight )
			:  Val(byData, dwWeight), pLeft(0), pRight(0){} 

		struct _tagDataWW
		{
			_tagDataWW(unsigned char Data, unsigned long Weight)
				:byData(Data), dwWeight( Weight ){ }

			unsigned char byData;			// 数据
			unsigned long dwWeight;	        // 权值
		}
		Val;

		_tagHtNode *pLeft;
		_tagHtNode *pRight;
	}
	HT_NODE, *P_HT_NODE;

private:
	P_HT_NODE m_pHtRoot;	// 哈夫曼树根节点指针

public:

	// 创建哈夫曼树
	void CreateHuffmanTree(const void *pData, unsigned int nSize)
	{
		list<P_HT_NODE> HtList;
		GetTreesWithWeight(pData , nSize , &HtList);
		CreateHuffmanTree(&HtList);
		m_pHtRoot = *HtList.begin(); 
	}

	// 建立哈夫曼树
	void CreateHuffmanTree(const vector<HT_NODE> &ElemList)
	{
		list<P_HT_NODE> HtList;
		vector<HT_NODE>::const_iterator it = ElemList.begin();
		for( ; it!=ElemList.end(); ++it)
		{
			P_HT_NODE pNode = new HT_NODE(it->Val.byData, it->Val.dwWeight);
			HtList.push_back(pNode);
		}
		CreateHuffmanTree(&HtList);
		m_pHtRoot = *HtList.begin(); 
	}

	// 建立哈夫曼树
	void CreateHuffmanTree(list<P_HT_NODE> *pHtList)
	{
		// 删除原先的哈夫曼树
		DeleteSubtree(m_pHtRoot ); 
		m_pHtRoot = 0;

		//循环
		while(pHtList->size() > 1)
		{
			// 找出2个权值最小的
			list<P_HT_NODE>::iterator h = pHtList->begin();
			list<P_HT_NODE>::iterator end = pHtList->begin(); 
			list<P_HT_NODE>::iterator it, min1, min2;
			++(++end);

			for( ; h != end; ++h)
			{
				for(it = h, ++it; it!=pHtList->end(); ++it)
				{
					if((*h)->Val.dwWeight > (*it)->Val.dwWeight)
					{
						P_HT_NODE pNode; 
						pNode = *it ;
						*it = *h ; 
						*h = pNode ; 
					}
				}
			}

			// 连接成新树
			min1 = pHtList->begin(); 
			min2 = ++pHtList->begin(); 
			P_HT_NODE pRoot = new HT_NODE(0, (*min1)->Val.dwWeight + (*min2)->Val.dwWeight);
			pRoot->pLeft = (*min1); 
			pRoot->pRight = (*min2); 
			*min1 = pRoot; 
			pHtList->erase(min2);
		}

	}

	// 取得映射关系
	void GetMapping(map<unsigned char , string> *pMapping) const 
	{
		if (m_pHtRoot != 0) CreateMapping(m_pHtRoot, pMapping);
	}

	// 取得哈夫曼树根节点指针
	P_HT_NODE GetHtRoot() const 
	{
		return m_pHtRoot; 
	}

public:

	// 统计权值
	void GetTreesWithWeight(const void *pData, unsigned int nSize, list<P_HT_NODE> *pHtList)
	{
		unsigned char *pIt = (unsigned char*)pData;
		const unsigned char *pEnd = (unsigned char*)pData + nSize;
		// 求指定的数据类型的取值空间。不能超过或者等于4字节
		const unsigned long dwKinds = 1<<(sizeof(unsigned char) * 8); 
		// 统计数据出现的次数
		unsigned long dwCount[dwKinds] = {0};
		for( ; pIt<pEnd; ++pIt)
		{
			++dwCount[ *pIt ];
		}
		for(int i=0; i<dwKinds; ++i)
		{
			if (dwCount[i] != 0)
			{
				P_HT_NODE pNode = new HT_NODE(i, dwCount[i]);
				pHtList->push_back(pNode);
			}
		}
	}


	// 创建映射关系
	void CreateMapping(const HT_NODE *pRoot, map<unsigned char , string> *pMapping, string sPath = "") const
	{
		if(pRoot)
		{
			CreateMapping(pRoot->pLeft, pMapping, sPath + "0");
			CreateMapping(pRoot->pRight, pMapping, sPath + "1");

			if((pRoot->pLeft == 0) && (pRoot->pRight == 0))
			{
				// 叶子节点
				pMapping->operator [ ](pRoot->Val.byData) = sPath; 
			}

		}
	}

	// 删除子树
	void DeleteSubtree(const HT_NODE *pRoot)
	{

		if(pRoot)
		{
			DeleteSubtree(pRoot->pLeft);
			DeleteSubtree(pRoot->pRight);
			delete pRoot ; 
		}

	}
};