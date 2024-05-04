

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int x, answer;
	cout << "输入变量的值";
	cin >> x;
	answer = sin(x) + cos(x) + 1 / tan(x);
	cout << answer;
}

