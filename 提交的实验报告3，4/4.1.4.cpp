#include<iostream>
using namespace std;
int main()
{
	int size1, size2;
	cin >> size1;
	int list1[10],list2[10];
	for (int i = 0; i < size1; i++)
	{	cin >> list1[i];}
	cin >> size2;
	for (int i = 0; i < size2; i++)
	{   cin >> list2[i];}
	int me[20];
	for (int i = 0; i < size1; i++)
	{  me[i] = list1[i];}
	for (int i = size1; i < size1 + size2; i++)
	{
		me[i] = list2[i - size1];
	}
	for (int i = 0; i < size1 + size2-1; i++)
	{
		for (int j = i + 1; j < size1 + size2; j++)
		{
			if (me[i] > me[j])
			{
				int t;
				t = me[i];
				me[i] = me[j];
				me[j] = t;
			}
		}
	}
	for (int i = 0; i < size1 + size2; i++)
	{
		cout << me[i] << " ";
	}
}