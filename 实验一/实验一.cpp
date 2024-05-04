

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cout << "输入四位数";
    cin >> a;
    b = a / 1000;
    c = (a - b * 1000) / 100;
    d = (a - b * 1000 - c * 100) / 10;
    d = (a - b * 1000 - c * 100) / 10;
    e = a - b * 1000 - c * 100 - d * 10;
   
    cout << e <<endl;
    cout << d << endl;
    cout << c << endl;
    cout << b<< endl;
    
    }