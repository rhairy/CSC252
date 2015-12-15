/* Complex Number implementation. */

#include "ComplexNumber.h"

ComplexNumber::ComplexNumber(double real, double imag)
	: m_real(real), m_imag(imag)
{
}

ComplexNumber::~ComplexNumber()
{
}

double ComplexNumber::getReal() const
{
	return this->m_real;
}

double ComplexNumber::getImag() const
{
	return this->m_imag;
}

void ComplexNumber::print() const
{
	cout << *this << endl;
}

void ComplexNumber::setReal(double val)
{
	this->m_real = val;
}

void ComplexNumber::setImag(double val)
{
	this->m_imag = val;
}

ComplexNumber operator+(const ComplexNumber& one, const ComplexNumber& two)
{
	ComplexNumber result(one.getReal() + two.getReal(), one.getImag() + two.getImag());
	return result;
}

ComplexNumber& ComplexNumber::operator++()
{
	this->m_real += 1;
	this->m_imag += 1;

	return *this;
}

ComplexNumber ComplexNumber::operator++(int unused)
{
  ComplexNumber result(this->m_real++, this->m_imag++);
  return result;
}

void operator+=(ComplexNumber& one, const ComplexNumber& two)
{
	one.setReal(one.getReal() + two.getReal());
	one.setImag(one.getImag() + two.getImag());
}

ComplexNumber operator-(const ComplexNumber& one, const ComplexNumber& two)
{
	ComplexNumber result(one.getReal() - two.getReal(), one.getImag() - two.getImag());
	return result;
}

ComplexNumber& ComplexNumber::operator--()
{
  this->m_real--;
  this->m_imag--;

  return *this;
}

ComplexNumber ComplexNumber::operator--(int unused)
{
  ComplexNumber result(this->m_real--, this->m_imag--);
  return result;
}

void operator-=(ComplexNumber& one, const ComplexNumber& two)
{
	one.setReal(one.getReal() - two.getReal());
	one.setImag(one.getImag() - two.getImag());
}

ComplexNumber operator*(const ComplexNumber& left, const ComplexNumber& right)
{
	ComplexNumber result((left.getReal() * right.getReal()) - (left.getImag() * right.getImag()), (left.getReal() * right.getImag()) + (left.getImag()*right.getReal()));
	return result;
}

ostream& operator<<(ostream& os, const ComplexNumber& object)
{
	os << object.getReal() << "+" << object.getImag() << "i";
	return os;
}

istream& operator>>(istream& is, ComplexNumber& object)
{
	double real;
	double imag;

	is >> real;
	is >> imag;

	object.setReal(real);
	object.setImag(imag);

	return is;
}
