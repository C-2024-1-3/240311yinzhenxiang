#include<iostream>
using namespace std;
bool is_prime(int num)
{
	if (num == 1)return 0;
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int total = 0, sum = 10;
	for (int i = 1;; i++)
	{
		if (is_prime(i))
		{
			total += 1;
			cout << i << "\t";
			if (total != 0 && total % 10 == 0)
			{
				cout << endl;
			}
		}
		if (total == 200)break;
	}
	return 0;
}