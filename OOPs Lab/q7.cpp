# include <iostream>

using namespace std;

class bank
{
	int count;
public:
	bank()
	{
		count=0;
	}
	bank operator++()
	{
		count++;
		cout << "A person entered!\n";
	}
	bank operator--()
	{
		count--;
		cout << "A person left!\n";
	}
	int get_count()
	{
		return count;
	}
};

int main()
{
	bank b;
	cout << "Initial No Of People: " << b.get_count() << endl;
	++b;
	++b;
	++b;
	cout << "Present No Of People: " << b.get_count() << endl;
	--b;
	--b;
	cout << "Present No Of People: " << b.get_count() << endl;
	return 0;
}
