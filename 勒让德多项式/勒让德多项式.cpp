
#include <iostream>
using namespace std;
int p(int n,int x) {
	int a;
	if (n == 0) a=1;
	else if (n == 1)a=x;
	else if (n > 1) {
		a = ((2 * n - 1) * x * p(n - 1, x) - (n - 1) * p(n - 2, x)) / n;
		return a;
	}

}
int main() {
	int n, x;
	cout << "输入n和x的值";
	cin >> n >> x;
	cout << p(n, x);

}
·