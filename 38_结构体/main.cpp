#include <iostream>
using namespace std;

// 结构体
struct student
{
    string name;
    int age;
    int score;
}stu3;



int main() 
{
    //定义方式一
    struct student stu1;
    stu1.name = "张三";
    stu1.age = 18;
    stu1.score = 90;

    cout << stu1.name << endl;
    cout << stu1.age << endl;
    cout << stu1.score << endl;

    //定义方式二
    struct student stu2 = {"李四", 19, 85};
    
    cout << stu2.name << endl;
    cout << stu2.age << endl;
    cout << stu2.score << endl;

    //定义方式三
    stu3.name = "王五";
    stu3.age = 20;
    stu3.score = 95;
    cout << stu3.name << endl;
    cout << stu3.age << endl;
    cout << stu3.score << endl;


    //结构体数组
    struct student stuArr[3] = {
        {"赵六", 21, 80},
        {"钱七", 22, 75}, 
        {"孙八", 23, 70}
    };
    for(int i = 0; i < 3; i++)
    {
        cout << stuArr[i].name << endl;
        cout << stuArr[i].age << endl;
        cout << stuArr[i].score << endl;
    }

    //结构体指针
    struct student * p = stuArr;
    p->name = "王二";
    p->age = 24;
    p->score = 85;
    cout << p->name << endl;
    cout << p->age << endl;
    cout << p->score << endl;
}

