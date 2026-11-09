#include <iostream>
using namespace std;
#include <string>

int main() 
{
    char str[] = "Hello, World!";       //C风格的字符串，字符数组       加中括号，用双引号
    string str1 = "Hello, World!";      //C++风格的字符串，string类对象     引入头文件#include <string>

    cout << str << endl; // 输出Hello, World!
    cout << str1 << endl; // 输出Hello, World!

    return 0;
}

 