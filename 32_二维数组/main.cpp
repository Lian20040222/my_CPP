#include <iostream>
using namespace std;

int main() 
{
    // 二维数组
    // 二维数组的定义：
    // 数组名[数组大小][数组大小]; [行][列]
    // 二维数组的初始化：
    // 数组名[数组大小][数组大小] = {{元素1, 元素2, ... 元素n}, ... 元素n}};
    // 二维数组的遍历：
    // for (int i = 0; i < 数组大小; i ++)
    // {
    //     for (int j = 0; j < 数组大小; j ++)
    //     {
    //         cout << 数组名[i][j] << endl;
    //     }
    // }

    int arr[2][3] ={
        {1, 2, 3},
        {4, 5, 6}
    };

    // 遍历二维数组
    for (int i = 0; i < 2; i++)
    {
        for(int j = 0; j <3; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}
 
