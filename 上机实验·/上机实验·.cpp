//1.利用异或运算对输入的文本进行加密解密输出
//用户输入一个文本（字符串,设不超过20个字符）
//然后输入作为密钥的字符，程序输出加密及解密的字符串。

#include <iostream>
using namespace std;
int main() {
	int a;
	int b;
	cout << "输入文本";
	cin >> a;
	cout << "输入秘钥";
	cin >> b;
	int c = a ^ b;
	int d = c ^ b;
	cout << "加密字符为" << c << "解密字符为" << d;
}