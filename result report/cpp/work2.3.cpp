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
			cout << "�ǵ���������" << endl;
		}
		cout << ans << endl;
	}
	else
	{
		cout << "����ֱ��������" << endl;
	}
}