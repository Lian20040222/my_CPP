#include <iostream>
using namespace std;

int main() 
{
    //1、整型
    int a = 0;
    cout << "请输入整型a的值:" << endl;
    cin >> a; // 输入整型a的值
    cout << "a = " << a << endl; // 输出a的值

    //2、浮点型
    float b = 0.0f;
    cout << "请输入浮点型b的值:" << endl;
    cin >> b; // 输入浮点型b的值
    cout << "b = " << b << endl; // 输出b的值

    //3、字符型
    char c = 'A';
    cout << "请输入字符型c的值:" << endl;
    cin >> c; // 输入字符型c的值
    cout << "c = " << c << endl; // 输出c的值


    //4、布尔型
    bool isTrue = true;
    cout << "请输入布尔型isTrue的值(0表示false,非0表示true):" << endl;
    cin >> isTrue; // 输入布尔型isTrue的值
    cout << "isTrue = " << isTrue << endl; // 输出isTrue的值

    //5、字符串型
    string str1 = "Hello, World!";      //C++风格的字符串，string类对象     引入头文件#include <string>
    cout << "请输入字符串str1的值:" << endl;
    cin >> str1; // 输入字符串str1的值
    cout << str1 << endl; // 输出Hello, World!

    return 0;
}
