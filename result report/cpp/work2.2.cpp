#include<iostream>
using namespace std;
int main()
{
	double x,ans;
	for (int i = 1; i <= 4; i++)
	{
		cin >> x;
		if (x > 0 && x < 1)
		{
			ans = 3 - 2 * x;
			cout << ans << endl;
		}
		if (x >= 1 && x < 5)
		{
			ans = 2.0 / (4 * x) + 1;
			cout << ans << endl;
		}
		if (x >= 5 && x < 10)
		{
			ans = x * x;
			cout << ans << endl;
		}
	}
}