#include <iostream>
using namespace std;

int main() 
{
    // 赋值运算符 = += -= *= /= %= 
    int a = 10;
    cout << "a = " << a << endl;

    a += 5;     //a = a + 5
    cout << "a += 5; a = " << a << endl;

    a -= 3;     //a = a - 3
    cout << "a -= 3; a = " << a << endl;

    a *= 2;     //a = a * 2
    cout << "a *= 2; a = " << a << endl;

    a /= 4;     //a = a / 4
    cout << "a /= 4; a = " << a << endl;

    a %= 3;     //a = a % 3
    cout << "a %= 3; a = " << a << endl;
}
