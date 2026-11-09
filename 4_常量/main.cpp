#include <iostream>
using namespace std;
//常量的定义方式
//1、 #define 宏定义
#define PI 3.14159 // 定义一个宏常量PI，值为3.14159
//2、 const 常量定义
const double E = 2.71828; // 定义一个const常量E，值为2.71828

int main() {
    // PI = PI + 1; // 错误，宏常量不能被修改
    cout << "圆周率为:" << PI << endl; // 输出宏常量PI的值

    // E = E + 1; // 错误，const常量不能被修改
    cout << "自然常数为:" << E << endl; // 输出const常量    
    return 0;
}
