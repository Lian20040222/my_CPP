#include <iostream>
using namespace std;

// 指针快速访问连续的数组元素

int main() 
{
    int arr[8] = {1,2,3,4,5,6,7,8};

    int * p = arr; //指针指向数组的首元素
    for(int i = 0; i < 8; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl; //输出数组元素的值
        cout << *p << endl; //输出指针指向的值
        p++; //指针加1，指向下一个元素
    }
}
