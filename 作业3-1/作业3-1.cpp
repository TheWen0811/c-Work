

#include <iostream>
using namespace std;
	int zdgys(int a, int b){
		if (a < b) {
			for (;a > 0;a--) {
				b% a == 0;
				return a;
				
			}
		}
		if (b<a) {
			for (;b > 0;b--) {
				a% b == 0;
				return b;
			}
		}

}
	int zxgbs(int a, int b) {
		int c = max(a, b);
		while (1) {
			if (c % a == 0 && c % b == 0)break;
			else c++;
		
		}
		return c;
		
	}
	int main() {
		int a, b;
		cout << "输入两个数";
		cin >> a >> b;
		cout << "最大公约数是" << zdgys(a, b) << "最小公倍数是" << zxgbs(a,b);
	}