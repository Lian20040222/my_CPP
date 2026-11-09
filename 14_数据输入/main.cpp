#include <iostream>
using namespace std;

int main() 
{
    //1. 创建布尔类型
    bool isTrue = true;
    bool isFalse = false;

    cout << "isTrue = " << isTrue << endl; // 输出isTrue的值            非0都是真
    cout << "isFalse = " << isFalse << endl; // 输出isFalse的值 

    cout << "isTrue = " << sizeof(isTrue) << " 字节" << endl; // 输出isTrue的大小
    return 0;
}
