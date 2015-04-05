# include <iostream>
# include <cstring>

using namespace std;

int max_len = 50;

int error(char *a)
{
	while(*a)
	{
		if(!strspn(a, "0123456789"))
		{
			cout << "Not a number!";
			return 1;
		}
		a++;
	}
	return 0;
}

void reverse_void(char *num, int len)
{
	cout << "Function with no return type-\n" << "Reversed num: ";
	for (int i=len; i >= 0; i--)
		cout << num[i];
}

char * reverse_int(char *num, int len)
{
	while(*num)
		num++;

	cout << endl << "Function with return type-\n" << "Reversed num: ";
	return num;
}

int main()
{
	char num[max_len], *a;
	int len;
	cout<<"Enter number: ";
	cin.getline(num, max_len);
	if(error(num))
		return 0;

	len = strlen(num);
	reverse_void(num, len);

	cout << endl;
	a = reverse_int(num, len);

	for(int i = len; i >= 0; i--)
		cout << (a-len)[i];

	return 0;
}