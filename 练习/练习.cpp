#include <iostream>
using namespace std;
const int row = 5;
const int col = 6;
int main() {
	char a[row][col];
	for (int i = 0; i < row; i++) {
		int add = 0, sum = 0;
		for (int j = 0; j < col; j++) {
			if (i == 0) {
				a[i][j] = 'A' + j;
				continue;
			}
			sum += add;
			a[i][j] = 'A' + i + sum;
			add++;
		}
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			cout << a[i][j] << ' ';
		cout << endl;
	}
	return 0;
}
