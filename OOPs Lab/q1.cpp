# include <iostream>
# include <cstring>

using namespace std;

int max_len = 50;

void count( char *line)
{
	int vowels = 0;

	while(*line)
	{
		if(strspn(line, "aeiou"))
			vowels++;
		line++;
	}
	cout << "Vowel count: " << vowels << endl;
}

int main()
{

	char line[max_len];
	int vowels=0;
	cout << "Enter a line: ";
	cin.getline(line, max_len);
	count(line);
	return 0;
}
