# include <iostream>

using namespace std;

class friendfunc2;

class friendfunc1
{
	float a, b;
	friend float avg(friendfunc1 &, friendfunc2 &);
public:
	void get()
	{
		cout << "\nEnter 2 numbers: ";
		cin >> a >> b;
	}
};

class friendfunc2
{
	float c, d, e;
	friend float avg(friendfunc1 &, friendfunc2 &);
public:
	void get()
	{
		cout << "\nEnter 3 numbers: ";
		cin >> c >> d >> e;
	}
};

float avg(friendfunc1 &f1, friendfunc2 &f2)
{
	float avg = (f1.a + f1.b + f2.c + f2.d + f2.e) / 5;
	return avg;
}

int main()
{
	friendfunc1 obj1;
	friendfunc2 obj2;
	obj1.get();
	obj2.get();
	cout  << "\nAverage : " << avg(obj1, obj2);
	return 0;
}
