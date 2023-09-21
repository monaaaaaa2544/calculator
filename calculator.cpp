#include <iostream>
#include <cmath>
// #include <locale>
using namespace std;

int main()
{
    // 设置终端使用UTF-8编码
    // setlocale(LC_ALL, "en_US.UTF-8");
    char op;
    double num1, num2, result;

    cout << "简单计算器" << endl;
    cout << "输入运算符+，-，*，/，^，%";
    cin >> op;

    cout << "输入两个数字：";
    cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0)
            result = num1 / num2;
        else
        {
            cout << "错误：除数不能为零!" << endl;
            return 1; // 退出程序，返回错误码
        }
        break;
    case '^':
        result = pow(num1, num2);
        break;
    case '%':
        if (num2 != 0)
            result = fmod(num1, num2);
        else
        {
            cout << "错误：取模时除数不能为零!" << endl;
            return 1; // 退出程序，返回错误码
        }
        break;
    default:
        cout << "错误：无效的运算符" << endl;
        return 1; // 退出程序，返回错误码
    }

    cout << "结果: " << num1 << " " << op << " " << num2 << " = " << result << endl;

    return 0;
}
