#include <iostream>
using namespace std;


// 函数的定义：
// 函数名(参数列表)
// {
//     函数体
// }
// 函数的调用：
// 函数名(实列表);
// 函数的返回值：
// 函数名(参数列表) -> 返回值类型


//函数的声明(函数定义在main函数之后, 需要在main函数之前声明；函数定义在main函数之前, 则不需要声明)
int getNum();


//有参有返
int add(int a, int b)
{
    return a + b;
}

//无参无返
void print()
{
    cout << "hello world" << endl;
}

//有参无返

void printa(int a)
{
    cout << a << endl;
}



int main() 
{
    int a = 10;
    int b = 20;
    int c = add(a, b);//调用函数
    cout << c << endl;   
    print();          //调用函数
    int d = getNum();   //调用函数
    cout << d << endl;
    printa(d);          //调用函数
}
 

//无参有返
int getNum()
{
    return 100;
}

