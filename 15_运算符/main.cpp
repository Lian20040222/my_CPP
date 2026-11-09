#include <iostream>
using namespace std;

int main() 
{
    // 运算符
    //加减乘除取余
    int a = 10;
    int b = 3;
    double a1 = 10.0;
    double b1 = 3.3;
    int c = a + b; // 加法
    int d = a - b; // 减法
    int e = a * b; // 乘法
    int f = a / b; // 除法
    int g = a % b; // 取余
    cout << "a + b = " << c << endl; // 输出a + b = 13
    cout << "a - b = " << d << endl; // 输出a - b = 7
    cout << "a * b = " << e << endl; // 输出a * b = 30
    cout << "a / b = " << f << endl; // 输出a / b = 3       // 两个整数相除，除法取整，小数部分完全舍去
    cout << "a % b = " << g << endl; // 输出a % b = 1       // 取余运算符，返回两个整数相除的余数(两个小数是不可以取余的)
    cout << "a1 / b1 = " << a1 / b1 << endl; // 输出a1 / b1 = 3.0303
    return 0;
}
