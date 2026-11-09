#include <iostream>
using namespace std;

int main() 
{
    // switch语句示例

    /* switch语句与if语句的区别 
     * 1. switch语句适用于多分支选择，且每个分支对应一个具体的值。
     * 2. if语句适用于条件判断，条件可以是任意表达式。
     * 3. switch语句中每个case后通常需要break，否则会执行下一个case。
     * 4. switch语句中可以使用default处理所有未列出的情况。

     switch的运行效率比if语句高。
    */
    int a = 2;
    switch (a)
    {
        case 1:
            cout << "a is 1" << endl;
            break;
        case 2:
            cout << "a is 2" << endl;
            break;
        default:
            cout << "a is not 1 or 2" << endl;
            break;
    }
}
 