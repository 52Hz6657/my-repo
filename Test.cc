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
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World!" << endl;
    system("pause");
    return 0;
}