#include<iostream>
using namespace std;
int main()
{
	double a, b, c,ans=0;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		ans = a + b + c;
		if (a == b || a == c || b == c)
		{
			cout << "是等腰三角形" << endl;
		}
		cout << ans << endl;
	}
	else
	{
		cout << "不是直角三角形" << endl;
	}
}