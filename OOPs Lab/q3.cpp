# include <iostream>
# include <stdlib.h>

using namespace std;

inline int addition(int x, int y)
{
	return (x+y);
}

inline int subtraction(int x, int y)
{
	return (x-y);
}

inline int multiplication(int x, int y)
{
	return (x*y);
}

inline int division(int x, int y)
{
	return (x/y);
}

inline int modulo(int x, int y)
{
	return (x%y);
}

int main()
{
	int x, y;
	cout << "Enter two num (x <op> y): ";
	cin >> x >> y;
	cout << "x + y = " << addition(x, y) << endl;
	cout << "x - y = " << subtraction(x, y) << endl;
	cout << "x * y = " << multiplication(x, y) << endl;
	cout << "x / y = " << division(x, y) << endl;
	cout << "x % y = " << modulo(x, y) << endl;
	return 0;
}