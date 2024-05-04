
#include <iostream>
#include <string>
#include<cmath>
using namespace std;
void reverse(string &s, int start, int back,int len) {
	swap(s[start], s[back]);
	reverse(s, ++start, --back,len-2);
	return;
}
void main() {
	string a;
	cout << "输入一个是字符串";
	cin >> a;
	reverse(a, 0, a.length() - 1,a.length());
	for (int i = 0;i < a.length();i++)
	{
		cout << a[i];
	}cout << endl;
}