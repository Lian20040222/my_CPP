#include <iostream>
using namespace std;

int main() 
{
    // break跳转语句示例
    int grade = 0;
    //出现在switch语句中，用于跳出switch语句
    cout << "请输入一个等级" << endl;
    cin >> grade;
    switch (grade)
    {
    case 1:
        cout << "A" << endl;
        break;  // 跳出switch语句，否则会继续执行下一个case
    case 2:
        cout << "B" << endl;
        break;
    case 3:
        cout << "C" << endl;
        break;
    case 4:
        cout << "D" << endl;
        break;
    case 5:
        cout << "E" << endl;
        break;
    default:
        cout << "输入错误" << endl;
        break;
    }

    cout << "打印一个10行10列的矩形：" << endl;
    for (int i = 0; i < 10; i ++)
    {
        for (int j = 0; j < 10; j ++)
        {
            if(j == 5)
            {
                break;  // 跳出内层循环，继续执行下一个循环
            }
            cout << "*";
        }
        cout << endl;
    }

}
 