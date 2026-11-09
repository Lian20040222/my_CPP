#include <iostream>
using namespace std;

int main() 
{
    //递增递减

    //前置递增递减
    int a = 10;
    int b = 10;
    cout << "********************************"<< endl;
    cout << "a = " << a++ << endl; // 输出a = 10
    cout << "b = " << ++b << endl; // 输出b = 11
    cout << "********************************"<< endl;

    cout << "a = " << a << endl; // 输出a = 10
    cout << "b = " << b << endl; // 输出b = 11
    cout << "********************************"<< endl;
    //后置递增递减
    cout << "a = " << a-- << endl; // 输出a = 11
    cout << "b = " << --b << endl; // 输出b = 10
    cout << "********************************"<< endl;
    cout << "a = " << a << endl; // 输出a = 10
    cout << "b = " << b << endl; // 输出b = 11
    cout << "********************************"<< endl;
}
