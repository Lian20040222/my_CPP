#include <iostream>
using namespace std;

int main() 
{
    // 嵌套循环示例

    // 打印一个10行10列的矩形
    cout << "打印一个10行10列的矩形：" << endl;
    for (int i = 0; i < 10; i ++)
    {
        for (int j = 0; j < 10; j ++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // 打印一个乘法表
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j ++)
        {
            cout << j << "*" << i << "=" << i * j << "\t";
        }
        cout << endl;
    }
}
 