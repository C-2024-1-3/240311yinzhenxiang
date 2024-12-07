#include<iostream>
#include<string>
#include<cctype>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;
	}
	for (int i = 0; s[i]!='\0'; i++)
	{
		char small = tolower(s[i]);
		counts[small - 'a'] += 1;
	}
}
int main()
{
	char s[100];
	cin.getline(s, sizeof(s));
	int counts[26];
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;
	}
	count(s, counts);
	for (int i = 0;i<26; i++)
	{
		if (counts[i] != 0) {
			cout << static_cast<char>(i + 'a') << " " << counts[i] << endl;
		}
	}
}