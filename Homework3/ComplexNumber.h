/* Complex Number Interface. */

#include<iostream>
#include<string>

using namespace std;

class ComplexNumber
{
 public:
        ComplexNumber() {}
	ComplexNumber(double real, double imag);
	~ComplexNumber();
	double getReal() const;
	double getImag() const;
	void print() const;
	void setReal(double val);
	void setImag(double val);
	ComplexNumber& operator++();
	ComplexNumber operator++(int unused);
	ComplexNumber& operator--();
	ComplexNumber operator--(int unused);
private:
	double m_real;
	double m_imag;
};

ComplexNumber operator+(const ComplexNumber& one, const ComplexNumber& two);
void operator+=(ComplexNumber& one, const ComplexNumber& two);
ComplexNumber operator-(const ComplexNumber& one, const ComplexNumber& two);
void operator-=(ComplexNumber& one, const ComplexNumber& two);
ComplexNumber operator*(const ComplexNumber& left, const ComplexNumber& right);
ostream& operator<<(ostream& os, const ComplexNumber& object);
istream& operator>>(istream& is, ComplexNumber& object);
