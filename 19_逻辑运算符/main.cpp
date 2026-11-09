#include <iostream>
using namespace std;

int main() 
{
    // 逻辑运算符 && || !
    int a = 10;
    int b = 0;
    cout << "(a && b) = " << (a && b) << endl; // 输出(a && b) = 0          a、b同时为真，结果为真
    cout << "(a || b) = " << (a || b) << endl; // 输出(a || b) = 1          a、b至少有一个为真，结果为真
    cout << "(!a) = " << (!a) << endl; // 输出(!a) = 0                      a为真，结果为假
}
