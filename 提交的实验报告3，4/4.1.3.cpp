#include<iostream>
using namespace std;
int main()
{
	bool a[100] = {false};
	int num = 100,sub=100;
	while (num)
	{
		num -= 1;
		int b = 0;
		for (int i=b; i < 100; i += (sub - num))
		{
			a[i] = !a[i];
		}
		b += 1;
	}
	for (int i = 0; i <= 100; i++)
	{
		if (a[i])
		{
			cout << i << " ";
		}
	}
	return 0;
}