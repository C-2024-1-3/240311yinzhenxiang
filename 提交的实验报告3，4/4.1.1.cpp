#include<iostream>
using namespace std;
char  a[10];
int main()
{
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (a[i] == a[j]) { a[j] = 'a'; };
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (a[i]!='a')
		{
			cout << a[i] << " ";
		}
	}
}