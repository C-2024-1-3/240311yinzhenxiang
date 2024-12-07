#include<iostream>
#include"mytemperature.h"
using namespace std;
int main()
{
	for (int i = 40; i >= 30; i--)
	{
		cout << celsius_to_fah(i) << " " << endl;
	}
	for (int i = 120; i >= 30; i-=10)
	{
		cout << fahrenheit_to_cels(i) << " " << endl;
	}
}