#ifndef RECTABGLE_H_
#define RECTANGLE_H_


class Rectangle
{

private:
	int length, width, height;
public:
	Rectangle(int len, int width, int height) :length(len), width(width), height(height){}
	virtual~Rectangle(){}
	int Volumn() const;
};


#endif