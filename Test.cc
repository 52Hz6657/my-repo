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
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World!" << endl;
    system("pause");
    return 0;
}