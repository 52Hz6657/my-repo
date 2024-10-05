/*#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World! 你好，世界！" << endl;
    system("pause");
    return 0;
}
*/

/*#include <iostream>
#include <string>
using namespace std;
int main()
{
    int score = 0;
    cout << "请输入分数：" << endl;
    cin >> score;
    if (score >= 90)
    {
        cout << "优秀" << endl;
    }
    else if (score >= 80)
    {
        cout << "良好" << endl;
    }
    else if (score >= 70)
    {
        cout << "中等" << endl;
    }
    else
    {
        cout << "不及格" << endl;
    }
    system("pause");
    return 0;
}
*/
/*#include <iostream>
using namespace std;
int main()
{
    double a, b, c = 0;
    cout << "请输入三个数：" << endl;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "最大值为：" << a << endl;
        }
        else
        {
            cout << "最大值为：" << c << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "最大值为：" << b << endl;
        }
        else
        {
            cout << "最大值为：" << c << endl;
        }
    }
    system("pause");
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{

    int a, b, c;
    cout << "请输入数字b，c：" << endl;
    cin >> b >> c;
    a = b > c ? b : c;
    cout << "a的值为：" << a << endl;
    system("pause");
    return 0;
}
*/
/*#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    cout << "a数组的长度为：" << sizeof(a) / sizeof(a[0]) << endl;
    system("pause");
    return 0;
}
*/
// 冒泡排序算法
/*#include <iostream>
using namespace std;
#define PARAM 128
const short param = 128;
namespace A
{
    int a = 10;
    int b = 20;
    void fun(void);
}
void func(short a)
{
    cout << "short!" << endl;
}
void func(int a)
{
    cout << "int" << endl;
}
void A::fun(void)
{
    const int array = 10;
    int array_a[array] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
}
void test(void)
{
    cout << "PARAM的func函数调用" << endl;
    func(PARAM); // 触发int
    cout << "PARAM的func函数调用" << endl;

    cout << "const short的func函数调用" << endl;
    func(param); // 触发short
    cout << "const short 的func函数调用" << endl;
}
int main()
{
    test();
    system("pause");
    return 0;
}*/
/*
#include <iostream>
using namespace std;
namespace A
{
    int A = 100;
    char a = 'A';
}
int main()
{
    auto c = 'A';
    auto num = 10;
    cout << "typeid(c):" << typeid(c).name() << endl;
    cout << "typeid(num):" << typeid(num).name() << endl;
    system("pause");
    return 0;
}*/
/*#include <iostream>
using namespace std;
class Person
{
private:
    string m_Name;  // 姓名 --- 可读可写
    int m_Age = 18; // 年龄 --- 只读
    string m_Lover; // 情人 --- 只写

    // 由于函数为public公共权限，故可以通过成员函数来修改设置属性
public:
    // 设置姓名
    void set_name(string a)
    {
        m_Name = a;
    }
    // 读取姓名
    string get_name()
    {
        return m_Name;
    }

    // 获取年龄
    int get_age()
    {
        return m_Age;
    }

    // 写入情人
    void set_lover(string a)
    {
        m_Lover = a;
    }
};

void test()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (auto &e : arr)
    {
        e *= 2;
        cout << e << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    Person Tom;
    Tom.set_name("Tom");
    int age = Tom.get_age();
    cout << "Tom的年龄为:" << age << endl;
    system("pause");
    return 0;
}
*/
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
class Person
{
private:
    string name;
    int age;

public:
    void Person_init(void)
    {
        cout << "请输入姓名：" << endl;
        cin >> name;
        cout << "请输入年龄：" << endl;
        cin >> age;
    }
    // 设置姓名
    void Set_name(string a)
    {
        name = a;
    }
    // 设置年龄
    void Set_age(int a)
    {
        if (a > 0 && a < 100)
        {
            age = a;
        }
        else
            cout << "年龄输入有误！" << endl;
    }
    // 输出姓名
    string Get_name()
    {
        return name;
    }
    // 输出年龄
    int Get_age()
    {
        return age;
    }
};
int main()
{
    vector<int> v(10, 2);
    for (auto &e : v)
    {
        cout << e << endl;
    }
    system("pause");
    return 0;
}