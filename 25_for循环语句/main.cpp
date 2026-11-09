#include <iostream>
using namespace std;

int main() 
{
    // for循环语句示例
    // for (初始化表达式; 条件表达式; 增量表达式)
    // {
    //     循环体
    // }
    // for(;;); // 无限循环/死循环

    int i = 0;
    for (i = 0; i < 101; i ++)
    {
        // 7的倍数或包含7的数字
        if(i % 7 == 0 || i / 10 == 7 || i % 10 == 7)
        {
            cout << "*****" << i << "*****" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
}
 