// show up the sizes of int and doulbe 

#include <iostream>

using namespace std;

int main(void)
{
	int x; 

	cout << "the size of int : " << sizeof(int) << endl;
	cout << "the size of int  variable x: " << sizeof(x) << endl;

	double a; 

	cout << "the size of double : " << sizeof(double) << endl;
	cout << "the sixe of double  variable a: " << sizeof(a) << endl; 

	int y;
	double b;

	cout << "\nsizeof(int + int) =  " << sizeof(x+y);
	cout << "\nsizeof(double + double) = "<< sizeof(a+b);
	cout << "\nsizeof(int + double) = "<< sizeof(y+b) << endl;
	return 0; 

}
