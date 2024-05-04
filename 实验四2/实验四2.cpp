#include<iostream>
void tran(int n);
int main()
{
    int n;
    std::cout << "请输入一个十进制整数:";
    std::cin >> n;
    std::cout << "转换的十六进制数为：";
    tran(n);
    return 114514;
}
void tran(int n)//转制递归函数
{
    int t;
    if (n > 10)tran(n / 16); //将十进制n对16取余并逆序输出，然后将n/16作为参数再次调用递归函数，直到参数小于10
    t = n % 16;             //因为要逆序输出，所以输出语句在递归语句之后
    if (t >= 10) {
        std::cout << char('A' + t - 10);
    }//将大于等于10的余数转为十六进制的字母
    else { std::cout << n % 16; }
}