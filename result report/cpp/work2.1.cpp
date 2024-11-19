#include<iostream>
using namespace std;
int main()
{
	char word;
	cin >> word;
	int num = 0;
	if (word >= 'a' && word <= 'z')
	{
		word = word - 'a' + 'A';
		cout << word;
	}
	else
	{
		num = word + 1;
		cout << num << endl;
	}
}