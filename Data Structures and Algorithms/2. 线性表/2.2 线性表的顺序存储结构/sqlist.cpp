#include<iostream>
#include "sqlist.h"

using namespace std;

template<class ElemType>
SqList<ElemType>::SqList(int size)
{
	maxSize = size;
	elems = new ElemType[maxSize];
	count = maxSize;
}

template<class ElemType>
SqList<ElemType>::~SqList()
{
	delete[]elems;
}

template<class ElemType>
int SqList<ElemType>::Length() const
{
	return count;
}

template<class ElemType>
bool SqList<ElemType>::Empty() const
{
	return count == 0;
}

template<class ElemType>
void SqList<ElemType>::Clear()
{
	delete[] elems;
	count = 0;
}

template<class ElemType>
void SqList<ElemType>::Traverse(void ( * visit)(const ElemType &)) const
{
	for (int pos = 1; pos <= Length(); pos++)
	{
		(*visit)(elems[pos - 1]);
	}
}

template<class ElemType>
bool SqList<ElemType>::GetElem(int position, ElemType &e) const
{
	if (position<1 || position>Length())
	{
		return false;
	}
	else
	{
		e = elems[position - 1];
		return true;
	}

}

template<class ElemType>
bool SqList<ElemType>::SetElem(int position, const ElemType &e)
{
	if (position<1 || position>Length())
	{
		return false;
	}
	else
	{
		elems[position - 1] = e;
		return true;
	}

}

template<class ElemType>
bool SqList<ElemType>::Insert(int position, const ElemType &e)
{
	ElemType tmp;
	if (cout == maxSize)
	{
		return false;
	}
	else if (position<1 || position>Length() + 1)
	{
		return false;
	}
	else
	{
		count++;
		for (int pos = Length(); pos >= position; pos--)
		{
			GetElem(pos, tmp); SetElem(pos + 1, tmp);
		}
		SetElem(position, e);
		return true;
	}

}

template<class ElemType>
bool SqList<ElemType>::Delete(int position, ElemType &e)
{
	ElemType temp;
	if (position<1 || position>Length())
	{
		return false;
	}
	else
	{
		GetElem(position, e);
		for (int pos = position + 1; pos < Length(); pos++)
		{
			GetElem(pos, tmp); SetElem(pos - 1, tmp);
		}
		count--;
		return true;
	}


}

void Traverse(const int &num){
	cout << "Traverse:" << num << endl;
}


int main()
{
	int foo = 100;
	SqList<int> thisSqlist(8);
	cout << "length:" << thisSqlist.Length() << endl;
	thisSqlist.SetElem(1, foo);

	cout << thisSqlist.elems[0] << endl;
	thisSqlist.Traverse(Traverse);
	cout << "length:" << thisSqlist.Length() << endl;
	system("pause");
	return 0;
}