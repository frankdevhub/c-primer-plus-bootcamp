#include<iostream>
#ifndef COMPLEX_H
#define COMPLEX_H

using namespace std;

class Complex
{
private:
	double realPart;
	double imagePart;

public:
	Complex(double rp = 0, double ip = 0) :realPart(rp), imagePart(ip){}
	virtual~Complex(void){}
	double GetRealPart() const { return realPart; }
	double GetImagePart() const { return imagePart; }
	void SetRealPart(double rp) { realPart = rp; }
	void SetImagePart(double ip) { imagePart = ip; }
	void Show() const;
	Complex operator-(const Complex &a);

};


void Complex::Show() const
{
	cout << realPart<<" ";
	if (imagePart < 0 && imagePart != -1) cout << imagePart << "i" << endl;
	else if (imagePart == -1) cout << "-i" << endl;
	else if (imagePart>0 && imagePart != 1) cout << "+" << imagePart <<"i"<< endl;
	else if (imagePart == 1) cout << "+i" << endl;

}

Complex operator+(const Complex &a, const Complex &b)
{
	Complex c;
	c.SetRealPart(a.GetRealPart() + b.GetRealPart());
	c.SetImagePart(a.GetImagePart() + b.GetImagePart());
	return c;
}

Complex Complex::operator-(const Complex &a)
{
	Complex c;
	c.SetRealPart(realPart - a.GetRealPart());
	c.SetImagePart(imagePart - a.GetImagePart());
	return c;
}

#endif
