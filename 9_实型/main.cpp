#include <iostream>
using namespace std;

//实型（浮点型）数据类型

int main() 
{
    float abc_float = 10.5f; // 定义一个浮点型变量abc_float并赋值为10.5  4字节
    double abc_double = 20.5; // 定义一个双精度浮点型变量abc_double并赋值为20.5  8字节

    cout << "abc_float = " << abc_float << endl; // 输出abc_float的值
    cout << "abc_double = " << abc_double << endl; // 输出abc_double的值

    cout << "abc_float = " << sizeof(abc_float) << " 字节" << endl; // 输出abc_float的大小
    cout << "abc_double = " << sizeof(abc_double) << " 字节" << endl; // 输出abc_double的大小

    cout << "float = " << sizeof(float) << " 字节" << endl; // 输出float的大小
    cout << "double = " << sizeof(double) << " 字节" << endl; // 输出double的大小
    
    return 0;
}
 