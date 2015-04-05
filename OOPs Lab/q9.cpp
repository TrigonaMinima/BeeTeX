# include <iostream>

using namespace std;

class matrix
{
	int arr[3][3];
public:
	void get()
	{
		cout  <<  "Enter matrix: ";
		for(int i=0; i<3; i++)
			for(int j=0; j<3; j++)
				cin >> arr[i][j];
	}
	void print()
	{
		cout << "matrix is: " << endl;
		for(int i=0; i<3; i++)
		{
			for(int j=0; j<3; j++)
			{
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}
	matrix operator+(matrix c)
	{
		matrix obj;
		for(int i=0; i<3; i++)
		{
			for(int j=0; j<3; j++)
			{
				obj.arr[i][j] = arr[i][j] + c.arr[i][j] ;
			}
		}
		return obj;
	}
	matrix operator-(matrix c)
	{
		matrix obj;
		for(int i=0; i<3; i++)
		{
			for(int j=0; j<3; j++)
			{
				obj.arr[i][j] = arr[i][j] - c.arr[i][j] ;
			}
		}
		return obj;
	}
};

int main()
{
	matrix mat1, mat2, add, sub;
	mat1.get();
	mat2.get();
	cout << "First ";
	mat1.print();
	cout << endl << "Second ";
	mat2.print();
	add = mat1 + mat2;
	cout << "\nAfter addition-" << endl;
	add.print();
	sub = mat1 - mat2;
	cout << endl << "\nAfter subtraction-" << endl;
	sub.print();
	return 0;
}