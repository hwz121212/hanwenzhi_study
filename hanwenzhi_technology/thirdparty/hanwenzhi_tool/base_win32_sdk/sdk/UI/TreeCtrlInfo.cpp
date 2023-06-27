#include "stdafx.h"
#include "TreeCtrlInfo.h"


namespace sdk
{
	namespace treectrl_info
	{

		// Delete all of the children of hmyItem.
		//HTREEITEM hmyItem = m_TreeCtrl.GetSelectedItem();
		void DeleteAllOfChildren(CTreeCtrl &treeCtrl, HTREEITEM hmyItem)
		{			
			if (treeCtrl.ItemHasChildren(hmyItem))
			{
				HTREEITEM hNextItem;
				HTREEITEM hChildItem = treeCtrl.GetChildItem(hmyItem);

				while (hChildItem != NULL)
				{
					hNextItem = treeCtrl.GetNextItem(hChildItem, TVGN_NEXT);
					treeCtrl.DeleteItem(hChildItem);
					hChildItem = hNextItem;
				}
			}
		}
		




	}
}