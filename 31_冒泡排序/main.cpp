#include <iostream>
using namespace std;

int main() 
{
    // 冒泡排序
    int arr[10] = {5, 2, 9, 1, 5, 6, 3, 7, 8, 4};

    // 冒泡排序的实现
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // 交换
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
}
 
