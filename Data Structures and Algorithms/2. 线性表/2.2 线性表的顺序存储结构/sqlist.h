#ifndef SQLIST_H
#define SQLIST_H

#define DEFAULT_SIZE 20

template<class ElemType>
class SqList
{
public:
	int count;
	int maxSize;
	ElemType * elems;

public:
	SqList(int size  = DEFAULT_SIZE);
	virtual ~SqList();
	int Length() const;
	bool Empty() const;
	void Clear();
	void Traverse(void( * visit)(const ElemType &)) const;
	bool GetElem(int position, ElemType &e)const;
	bool SetElem(int position, const ElemType &e);
	bool Delete(int position, ElemType &e);
	bool Insert(int position, const ElemType &e);
	SqList(const SqList<ElemType> &copy);
	SqList&operator=(const SqList<ElemType>&copy);
};

#endif;