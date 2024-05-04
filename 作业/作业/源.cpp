#include <iostream>
using namespace std;
int main() {
	for (int a = 3;a < 100;a++)
	{
		for (int b =1;b < a;b++)
		{
			if (a % b == 0)continue;
			else
			{
				cout << a << " ";
			}
		}
	}
}