/* Main Routine. */

#include<iostream>
#include<string>

#include"ComplexNumber.h"

using namespace std;

int main(void)
{
	ComplexNumber first(1, 2);
	ComplexNumber second(2, 1);

	cout << "We have two complex numbers: " << first << " and " << second << endl;

	cout << "Here they are added: " << first + second << endl;

	cout << "Here they are multiplied: " << first * second << endl;

	cout << "Here they are divided: " << first / second << endl;

	cout << "Here we use the prefix ++ operator on the first number: " << ++first << endl;

	cout << "Here we use the postfix ++ operator on the first number: " << first++ << endl;

	cout << "Here is the current value of the first number: " << first << endl;

	cout << "Here we use the prefix -- operator on the first number: " << --first << endl;

	cout << "Here we use the postfix -- operator on the first number: " << first-- << endl;

	cout << "Here is the current value of the first number: " << first << endl;

	cout << "Enter the real and imaginary parts of a complex number, separted by newlines: ";
	ComplexNumber third;
	cin >> third;

	cout << "You entered: " << third << endl;

	return 0;
}
