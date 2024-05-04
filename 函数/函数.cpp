//自己写一个strcmp函数，实现两个字符串的比较。
//两个字符串s1, s2由main函数输入，strcmp函数的返回值也在main函数中输出。
#include<iostream>
using namespace std;
int strcmp(char* p1, char* p2) {
	int i = 0;
	while (*(p1 + i) == *(p2 + i))
	{
		i++;
		if (*(p1 + i) == '/n')return 0;
	}return(*(p1 + i) - *(p2 + i));
}
int main() {
	char str1[20], str2[20], * p1, * p2;
	int a;
	cout << "输入两个字符串";
	cin >> str1 >> str2;
	p1 = str1;p2 = str2;
	a = strcmp(p1, p2);
	cout << a;
}