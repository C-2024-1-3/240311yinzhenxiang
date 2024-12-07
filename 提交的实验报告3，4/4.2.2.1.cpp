#include <iostream>
#include <cstring>
#include<string>
using namespace std;
int indexOf(const string s1, const string s2) {
    int len1 = s1.length();
    int len2 = s2.length();
    for (int i = 0; i <= len2 - len1; i++) {
        int j;
        for (j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                break;
            }
        }
        if (j == len1) {
            return i;
        }
    }
    return -1;
}
int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int result = indexOf(s1, s2);
    if (result != -1) {
        cout << s1 << " �� " << s2 << " ���Ӵ����±�Ϊ " << result << endl;
    }
    else {
        cout << s1 << " ���� " << s2 << " ���Ӵ�" << endl;
    }

    return 0;
}