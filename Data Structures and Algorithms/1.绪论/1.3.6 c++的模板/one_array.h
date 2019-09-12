#ifndef ONE_ARRAY_H
#define ONE_ARRAY_H

template<class ElemType>
class OneArray
{
	private:
	ElemType * elem;
	int size;

public:
	OneArray(int sz) :size(sz) { elem = new ElemType[size]; }
	virtual~OneArray(void){ delete elem; }
	ElemType &operator[](int i){ return elem[i]; }


};

#endif
