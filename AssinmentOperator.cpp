//the difference between int and double and Assignment Operator 

#include <iostream>

using namespace std;

int main(void)
{
	int a, b;
	a = 3.14;
	b = 2.95;

	cout << "a = " << a << " IN THE CODE a = 3.14\n"; 	
	cout << "b = " << b << " IN THE CODE b = 2.95 \n"; 
	cout << "a + b = " << a + b << "\n"; 
	cout << "a - b = " << a - b << "\n"; 
	cout << "a * b = " << a * b << "\n"; 
	cout << "a / b = " << a / b << "\n"; 
	cout << "a % b = " << a % b << "\n";
	cout << "the result is we can store double with type int"
	     << "\nBut answers will be INTEGER."; 

	double x,y;
	x = 3.14;
	y = 2.95; 

	cout << "x = " << x << "\n"; 
	cout << "y = " << y << "\n"; 
	cout << "x + y = " << x + y << "\n"; 
	cout << "x - y = " << x - y << "\n"; 
	cout << "x * y = " << x * y << "\n"; 
	cout << "x / y = " << x / y << "\n"; 
	cout << "cout << x % y =  << x % y ";
	cout << "\nit causes error, so can not use divition with %\n"; 
	//this causes error.
	return 0; 
} 


