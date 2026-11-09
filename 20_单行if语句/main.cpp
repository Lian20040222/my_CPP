#include <iostream>
using namespace std;

int main() 
{
    // if语句
    int a = 111;
    if (a > 0 && a < 10)
    {
        cout << "a is positive between 0 and 9" << endl;
    }
    else if (a >= 10)
    {
        cout << "a is 10 or greater" << endl;
        if (a % 2 == 0)
        {
            cout << "a 是一个大于等于10的偶数" << endl;
        }
        else
        {
            cout << "a 是一个大于10的奇数" << endl;
        }
    }
    else
    {
        cout << "a is not positive" << endl;
    }
}
