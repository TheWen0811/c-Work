// 编写出判断一个整数是否为素数的函数，并求出在2000以内的有十个以上的所有连续的非素数组
#include <iostream>
using namespace std;
int hanshu(int a) {
	
	int b;
	for (b = 2;b <= a;b++) {
			if (a % b == 0)
			{
				cout << a << "不是素数";
				break;
			}
			else if (b == a )
				cout<<a << "是素数";
			return 0;
	}
}

int main() {
	int scores[10];

	


