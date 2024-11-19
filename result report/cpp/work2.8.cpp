#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;
double a[1000];
int main()
{
	double b = 0;
	cin >> b;
	if (b > 0) {
		a[0] = b;
		for (int i = 1;; i++)
		{
			a[i] = (a[i - 1] + (double)(b / a[i - 1])) * 0.5;
			if (fabs(a[i] - a[i - 1]) < 10e-5)
			{
				cout << a[i] << endl;
				break;
			}
		}
	}
	return 0;
}