#include <iostream>
using namespace std;

int main() 
{
    // continue跳转语句示例
    // continue语句用于跳过当前循环的剩余部分，继续执行下一个循环
    //continue与break的区别：
    // continue语句用于跳过当前循环的剩余部分，继续执行下一个循环
    // break语句用于跳出整个循环，结束循环

    cout << "打印一个10行9列的矩形：" << endl;
    for (int i = 0; i < 10; i ++)
    {
        for (int j = 0; j < 10; j ++)
        {
            if(j == 5)
            {
                continue;  // 跳出内层循环，继续执行下一个循环
            }
            cout << "*";
        }
        cout << endl;
    }

}
 