#include <iostream>
using namespace std;

//字符型数据类型

int main() 
{
    char abc_char = 'A'; // 定义一个字符型变量abc_char并赋值为'A'  1字节
    //两种错误的写法
    // char ch = "a";      // 定义一个字符型变量ch并赋值为"a"  1字节        (错误)  字符型变量只能存储一个字符，不能存储字符串，应该使用单引号
    // char ch1 = 'abcd';    // 定义一个字符型变量ch1并赋值为'abcd'  1字节  (错误)  字符型变量只能存储一个字符，不能存储多个字符

    cout << "abc_char = " << abc_char << endl; // 输出abc_char的值

    cout << "abc_char = " << sizeof(abc_char) << " 字节" << endl; // 输出abc_char的大小

    return 0;
}

 