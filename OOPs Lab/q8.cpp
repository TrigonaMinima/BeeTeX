# include <iostream>

using namespace std;

class company
{
	int budget;
	int employees;
public:
	void get()
	{
		cout << "Enter budget: ";
		cin >> budget;
		cout << "Enter employees: ";
		cin >> employees;
	}
	void print()
	{
		cout << "Budget is: " << budget << endl;
		cout << "Employees are: " << employees << endl;
	}
	company operator+(company c)
	{
		company obj;
		obj.budget = budget + c.budget;
		obj.employees = employees + c.employees;
		return obj;
	}
	company operator-(company c)
	{
		company obj;
		obj.budget = budget - c.budget;
		obj.employees = employees - c.employees;
		return obj;
	}
};

int main()
{
	company b1, b2, add, sub;
	b1.get();
	b2.get();
	add = b1 + b2;
	cout << "After addition-" << endl;
	add.print();
	sub = b1 - b2;
	cout << endl << "After subtraction-" << endl;
	sub.print();
	return 0;
}