#include "add.h"
#include "string.h"


#define MAX_PERSON 1000

// 通讯录系统


//联系人结构体
struct Person
{
    string name;
    int sex;
    int age;
    string phone;
    string address;
};

//通讯录结构体
struct Addressbooks
{
    struct Person Person[MAX_PERSON];
    int m_Size;
};


//菜单界面

void ShowMenu()
{
    cout <<"*****欢迎使用通讯录系统*****"<<endl;
    cout <<"*****1、添加联系人*****"<<endl;
    cout <<"*****2、显示联系人*****"<<endl;
    cout <<"*****3、删除联系人*****"<<endl;
    cout <<"*****4、查找联系人*****"<<endl;
    cout <<"*****5、修改联系人*****"<<endl;
    cout <<"*****6、清空通讯录*****"<<endl;
    cout <<"*****0、退出通讯录*****"<<endl;
    cout <<"请输入您的选择："<<endl;
}


void addPerson(Addressbooks *abs)
{
    //先判断通讯录是否已满
    //如果通讯录已满，提示用户通讯录已满，不能添加联系人
    if(abs->m_Size >= MAX_PERSON)
    {
        cout <<"通讯录已满，不能添加联系人"<<endl;
        return;
    }
    else
    {
        cout <<"请输入联系人姓名："<<endl;
        cin >> abs->Person[abs->m_Size].name;
        cout <<"请输入联系人性别："<<endl;
        cout <<"1、男"<<endl;
        cout <<"2、女"<<endl;
        int sex;
        while(1)
        {
            cout <<"请输入联系人性别："<<endl;
            cin >> sex;
            if(sex == 1 || sex == 2)
            {
                abs->Person[abs->m_Size].sex = sex;
                break;
            }
            else
            {
                cout <<"请输入正确的性别"<<endl;
            }
        }
        cout <<"请输入联系人年龄："<<endl;
        cin >> abs->Person[abs->m_Size].age;
        cout <<"请输入联系人手机号："<<endl;
        cin >> abs->Person[abs->m_Size].phone;
        cout <<"请输入联系人地址："<<endl;
        cin >> abs->Person[abs->m_Size].address;

        cout <<"添加联系人成功"<<endl;

        system("pause");
        system("cls");
    }
    abs->m_Size++;
}

void showPerson(Addressbooks *abs)
{
    if(abs->m_Size == 0)
    {
        cout <<"通讯录为空，不能显示联系人"<<endl;
        return;
    }
    else
    {
        cout <<"通讯录中联系人信息如下："<<endl;
        for(int i = 0; i < abs->m_Size; i++)
        {
            cout << abs->Person[i].name << "\t";
            if(abs->Person[i].sex == 1)
            {
                cout << "男\t";
            }
            else
            {
                cout << "女\t";
            }
            cout << abs->Person[i].age << "\t";
            cout << abs->Person[i].phone << "\t";
            cout << abs->Person[i].address << "\t";
            cout << endl;
        }
    } 
    system("pause");
}

int isExist(Addressbooks *abs, string name)
{
    for(int i = 0; i < abs->m_Size; i++)
    {
        if(abs->Person[i].name == name)
        {
            cout <<"联系人存在"<<endl;
            return i;
        }
    }
    cout <<"联系人不存在"<<endl;
    return -1;
}

void deletePerson(Addressbooks *abs)
{
    cout <<"请输入要删除的联系人姓名："<<endl;
    string name;
    cin >> name;
    int index = isExist(abs, name);
    if(index != -1)
    {
        abs->Person[index] = abs->Person[abs->m_Size - 1];
        abs->m_Size--;
        cout <<"删除联系人成功"<<endl;
    }
    else
    {
        cout <<"联系人不存在"<<endl;
    }
    system("pause");
    system("cls");
}

void findPerson(Addressbooks *abs)
{
    cout <<"请输入要查找的联系人姓名："<<endl;
    string name;
    cin >> name;
    int index = isExist(abs, name);
    if(index != -1)
    {
        cout <<"联系人信息如下："<<endl;
        cout << abs->Person[index].name << "\t";
        if(abs->Person[index].sex == 1)
        {
            cout << "男\t";
        }
        else
        {
            cout << "女\t";
        }
        cout << abs->Person[index].age << "\t";
        cout << abs->Person[index].phone << "\t";
        cout << abs->Person[index].address << "\t";
        cout << endl;
    }
    system("pause");
    system("cls");
}

void modifyPerson(Addressbooks * abs)
{
    cout <<"请输入要修改的联系人姓名："<<endl;
    string name;
    cin >> name;
    int index = isExist(abs, name);
    if(index != -1)
    {
        cout <<"联系人存在"<<endl;
        cout <<"请输入新的联系人姓名："<<endl;
        cin >> abs->Person[index].name;
        cout <<"请输入新的联系人性别："<<endl;
        cout <<"1、男"<<endl;
        cout <<"2、女"<<endl;
        int sex;
        while(1)
        {
            cout <<"请输入新的联系人性别："<<endl;
            cin >> sex;
            if(sex == 1 || sex == 2)
            {
                abs->Person[index].sex = sex;
                break;
            }
            else
            {
                cout <<"请输入正确的性别"<<endl;
            }
        }
        cout <<"请输入新的联系人年龄："<<endl;
        cin >> abs->Person[index].age;
        cout <<"请输入新的联系人手机号："<<endl;
        cin >> abs->Person[index].phone;
        cout <<"请输入新的联系人地址："<<endl;
        cin >> abs->Person[index].address;
        cout <<"修改联系人成功"<<endl;
    }
    else
    {
        cout <<"联系人不存在"<<endl;
    }
    system("pause");
    system("cls");
}

void cleanPerson(Addressbooks *abs)
{
    abs->m_Size = 0;
    cout <<"通讯录已清空"<<endl;
    system("pause");
    system("cls");
}

int main() 
{
    int select;
    Addressbooks abs;
    abs.m_Size = 0;
    while(1)
    {
        ShowMenu();
        cin >> select;
        switch(select)
        {
            case 0:
                cout <<"谢谢使用，再见！"<<endl;
                return 0;
                break;
            case 1:             //1、添加联系人
                addPerson(&abs);//利用地址传递通讯录结构体
                break;
            case 2:             //2、显示联系人
                showPerson(&abs);
                break;
            case 3:             //3、删除联系人
            {
                deletePerson(&abs);
                break;
            }
            case 4:             //4、查找联系人 
            {
                findPerson(&abs);
                break;
            }
            case 5:             //5、修改联系人
            {
                modifyPerson(&abs);
                break;
            }
            case 6:             //6、清空通讯录
            {
                cleanPerson(&abs);
                break;
            }
            default:
                break;
        }
    }
}
 

