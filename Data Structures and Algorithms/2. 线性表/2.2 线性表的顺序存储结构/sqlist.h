template<class elemType>
class SqList
{
protected:
	int count;
	int maxSize;
	elemType * elems;

public:
	SqList(int size = DEFAULT_SIZE);
	virtual~SqList(){};
	int Length() const;
	bool Empty() const;
	void Clear();
	void Traverse(void( * visit)(const elemType &));
	bool GetElem(int position, elemType &e)const;
	bool SetElem(int position, const elemType &e);
	bool Delete(int position, elemType &e);
	bool Insert(int position, const elemType &e);
	SqList(const SqList<elemType> &copy);
	SqList&operator=(const SqList<elemType>&copy);
};