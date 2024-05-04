
#include<iostream>
using namespace std;
int main()
{
    int n;
    for (n = 10; n < 10000; n++) {
        for (; n < 100; n++) {
            int a = n / 10;
            int b = n - a * 10;
            if (a < b)cout << n << ' ';
        }
        if (100 < n < 1000) {
            int a = n / 100;
            int b = (n - a * 100) / 10;
            int c = n - a * 100 - b * 10;
            if (a < b && b < c)cout << n << ' ';
        }
        if (1000 < n < 10000) {
            int a = n / 1000;
            int b = (n - a * 1000) / 100;
            int c = (n - a * 1000 - b * 100) / 10;
            int d =n - a * 1000 - b * 100 - c * 10;
            if (a < b && b < c && c < d)cout << n << ' ';
        }
    }
}
