#include<iostream>
using namespace std;
int main()
{
	int num = 0,day=0,number=0;
	float price = 0.8;
	for (int i = 2;num<=100; i *= 2,day++)
	{
		num += i;
		if (num > 100 && (num - i) <= 100)
		{
		 number = num - i;
			cout << "最大苹果数为" << num-i << endl;
			cout << "最大天数为" << day << endl;
			break;
		}
	}
	double average = 0, total = 0;
	total = number * 0.8;
	printf("%0.2f", float(total / day));
}