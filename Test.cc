/*#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World! ��ã����磡" << endl;
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
    cout << "�����������" << endl;
    cin >> score;
    if (score >= 90)
    {
        cout << "����" << endl;
    }
    else if (score >= 80)
    {
        cout << "����" << endl;
    }
    else if (score >= 70)
    {
        cout << "�е�" << endl;
    }
    else
    {
        cout << "������" << endl;
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
    cout << "��������������" << endl;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "���ֵΪ��" << a << endl;
        }
        else
        {
            cout << "���ֵΪ��" << c << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "���ֵΪ��" << b << endl;
        }
        else
        {
            cout << "���ֵΪ��" << c << endl;
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
    cout << "����������b��c��" << endl;
    cin >> b >> c;
    a = b > c ? b : c;
    cout << "a��ֵΪ��" << a << endl;
    system("pause");
    return 0;
}
*/
/*#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    cout << "a����ĳ���Ϊ��" << sizeof(a) / sizeof(a[0]) << endl;
    system("pause");
    return 0;
}
*/
// ð�������㷨
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
    cout << "PARAM��func��������" << endl;
    func(PARAM); // ����int
    cout << "PARAM��func��������" << endl;

    cout << "const short��func��������" << endl;
    func(param); // ����short
    cout << "const short ��func��������" << endl;
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
    string m_Name;  // ���� --- �ɶ���д
    int m_Age = 18; // ���� --- ֻ��
    string m_Lover; // ���� --- ֻд

    // ���ں���Ϊpublic����Ȩ�ޣ��ʿ���ͨ����Ա�������޸���������
public:
    // ��������
    void set_name(string a)
    {
        m_Name = a;
    }
    // ��ȡ����
    string get_name()
    {
        return m_Name;
    }

    // ��ȡ����
    int get_age()
    {
        return m_Age;
    }

    // д������
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
    cout << "Tom������Ϊ:" << age << endl;
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
        cout << "������������" << endl;
        cin >> name;
        cout << "���������䣺" << endl;
        cin >> age;
    }
    // ��������
    void Set_name(string a)
    {
        name = a;
    }
    // ��������
    void Set_age(int a)
    {
        if (a > 0 && a < 100)
        {
            age = a;
        }
        else
            cout << "������������" << endl;
    }
    // �������
    string Get_name()
    {
        return name;
    }
    // �������
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