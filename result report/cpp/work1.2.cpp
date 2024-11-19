#include<iostream>
using namespace std;
#define pi 3.14
int main()
{
	double r, h, v = 0;
	cin >> r >> h;
	printf("%.3f", pi * r * r * h / 3);
	return 0;
}