#include <iostream>
using namespace std;

int main() 
{
    // goto跳转语句示例
    // goto语句用于跳转到指定的标签处执行代码
    // goto语句的格式：goto 标签名;
    // 标签名：标签名可以是任意标识符，但是不能以数字开头
    // 标签名的格式：标签名：

    cout << "1" << endl;
    cout << "2" << endl;

    goto FLAG;
    cout << "3" << endl;
    cout << "4" << endl;
    cout << "5" << endl;
    FLAG:
    cout << "6" << endl;
    cout << "7" << endl;
    cout << "8" << endl;


}
 