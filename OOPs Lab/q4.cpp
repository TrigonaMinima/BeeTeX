# include <iostream>

using namespace std;

int created=0;
int destroyed=0;

class object
{
public:
	object()
	{
		++created;
		cout << "\nObject created: " << created;
	}
	~object()
	{
		++destroyed;
		cout << "\nObject destroyed: " << destroyed;
	}
};

int main()
{
	object obj1, obj2;
	{
		object obj3, obj4, obj5;
	}
	object obj6;
	return 0;
}