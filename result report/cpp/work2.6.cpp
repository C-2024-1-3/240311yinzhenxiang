#include<iostream>
using namespace std;
int main()
{
	int a, b, max, min;
	cin >> a >> b;
		for (int i =(a>b)?b:a; i >= 1; i--)
		{
			if (a % i == 0 && b % i == 0)
			{
				max = i;
				break;
			}
		}
		for (int i =(a>b)?a:b;; i++)
		{
			if (i % a == 0 && i % b == 0)
			{
				min = i;
				break;
			}
		}
	cout << max << endl << min << endl;
}