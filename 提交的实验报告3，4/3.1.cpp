#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int m, int n,int&num)
{
	for (int i = 1; i <= max(m,n); i++)
	{
		if (m % i == 0 && n % i == 0)
		{
			num = i;
		}
	}
	return num;
}
int least(int m, int n, int& lea)
{
	int dis = 1;
	while (dis != 0)
	{
		for (int i = min(m, n);; i++)
		{
			if (i % m == 0 && i % n == 0)
			{
				lea = i;
				dis = 0;
				break;
			}
		}
	}
	return lea;
}
int main()
{
	int m, n, num,lea;
	cin >> m >> n;
	cout << "最大公约数为" << gcd(m, n, num) << endl;
	cout<<"最小公倍数为"<<least(m, n, lea)<<endl;
}