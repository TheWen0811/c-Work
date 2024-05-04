#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cout << "输入a的值";
	cin >> a;
	cout << "输入b的值";
	cin >> b;
	cout << "a&b is:" << int(a & b)<<endl ;
	cout << "a|b is" << int(a | b)<<endl ;
	cout << "a^b is" << int(a ^ b)<<endl;
	cout << "~a is" << (~a)<<endl;
	cout << "~b is" << (~b) << endl;
	
}
