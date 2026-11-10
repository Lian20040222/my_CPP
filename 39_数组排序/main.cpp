#include <iostream>
using namespace std;

struct Hero
{
    string name;
    int age;
    string sex;
};

int main() 
{
    Hero Human[5] = 
    {
        {"刘备", 23, "男"},
        {"关羽", 22, "男"},
        {"张飞", 20, "男"},
        {"赵云", 21, "男"},
        {"貂蝉", 19, "女"},
    };

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4 - i; j++)
        {
            if(Human[j].age > Human[j+1].age)
            {
                Hero temp_max;
                temp_max = Human[j];
                Human[j] = Human[j+1];
                Human[j+1] = temp_max;
            }
        }
    }
    for(int i = 0; i < 5; i++)
    {
        cout << Human[i].name << " " << Human[i].age << " " << Human[i].sex << endl;
    }
}

