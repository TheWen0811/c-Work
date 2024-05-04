4

#include <iostream>
using namespace std;
int main()
{
	int x, answer;
	cout << "输入变量的值";
	cin >> x;
	answer = sqrt(1 + 1 / (x + (1 / (x + 1))));
	cout << answer;
	return 0;
   
}
