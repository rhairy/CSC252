/* Main Routine. */


#include<iostream>
#include<string>

#include"ComplexNumber.h"

using namespace std;

int main(void)
{
	ComplexNumber first(1, 2);
	ComplexNumber second(2, 1);

	cout << first << " Plus " << second << " = " << first + second << endl;


	cout << first << " * " <<  second << " = " << first * second << endl;

	cout << "++" << first << " = " << ++first << endl;

	//cout << first++ << endl;

	return 0;
}
