#include<iostream>
#include<string>
using namespace std;
int a[4];
int main()
{
	string s;
	getline(cin, s);
		for (int i = 0; i < s.length(); i++)
		{
			if ('A' <= s[i] && s[i] <= 'Z')
			{
				a[0]++;
			}
			else if ('a' <= s[i] && s[i] <= 'z')
			{
				a[0]++;
			}
			else if (s[i] == ' ')
			{
				a[1]++;
			}
			else if ('0' <= s[i] && s[i] <= '9')
			{
				a[2]++;
			}
		    else
			{
				a[3]++;
			}
		}
		cout << "��ĸ��Ϊ" << a[0] << endl;
		cout << "�ո���Ϊ" << a[1] << endl;
		cout << "������Ϊ" << a[2] << endl;
		cout << "������Ϊ" << a[3] << endl;
		return 0;
}
