#include <iostream>
using namespace std;


int main() 
{

    int abc_int = 10; // 定义一个整数变量abc_int并赋值为10                        4字节

    short abc_short = 20; // 定义一个短整型变量abc_short并赋值为20                2字节

    long abc_long = 30; // 定义一个长整型变量abc_long并赋值为30                   视操作系统而定

    long long abc_long_long = 40; // 定义一个长长整型变量abc_long_long并赋值为40  8字节

    cout << "abc_int = " << abc_int << endl; // 输出abc_int的值
    cout << "abc_short = " << abc_short << endl; // 输出abc_short的值
    cout << "abc_long = " << abc_long << endl; // 输出abc_long的值
    cout << "abc_long_long = " << abc_long_long << endl; // 输出abc_long_long的值

    cout << "abc_int = " << sizeof(abc_int) << " 字节" << endl; // 输出abc_int的大小
    cout << "abc_short = " << sizeof(abc_short) << " 字节" << endl; // 输出abc_short的大小
    cout << "abc_long = " << sizeof(abc_long) << " 字节" << endl; // 输出abc_long的大小
    cout << "abc_long_long = " << sizeof(abc_long_long) << " 字节" << endl; // 输出abc_long_long的大小

    return 0;
}
 