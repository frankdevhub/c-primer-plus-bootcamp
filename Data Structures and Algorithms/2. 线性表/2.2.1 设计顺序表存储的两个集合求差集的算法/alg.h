#include "sqlist.h"

template<class ElemType>
void Difference(const SqList<ElemType>&la, const SqList<ElemType> &lb, SqList<ElemType> &lc)
{
	ElemType aElem, bElem;
	lc.Clear();

	for (int aPos = 1; aPos < la.Length(); aPos++)
	{
		la.GetElem(aPos, aElem);
		bool isExist = false;

		for (int bPos = 1; b <= lb.Length(); bPos++)
		{
			lb.GetElem(bPos, bElem);
			if (aElem== bElem)
			{
				isExist = true;
				break;
			}
		}

		if (!isExist)
			lc.Insert(lc.Length()+1,aElem);
	}
}