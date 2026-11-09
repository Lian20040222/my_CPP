#include <iostream>
using namespace std;

int main() 
{
    // do_while循环语句示例

    //while与do_while的区别：while先判断再执行，do_while先执行再判断
    int i = 100;
    do
    {
        // cout << "i = " << i << endl;
        i++;
        int num_3 = i /100;
        int num_2 = i % 100 / 10;
        int num_1 = i % 10;
        int num = num_3 * num_3 * num_3 + num_2 * num_2 * num_2 + num_1 * num_1 * num_1;
        if (num == i)
        {
            cout << "i = " << i << endl;
        }
    }
    while (i < 999);
}
 