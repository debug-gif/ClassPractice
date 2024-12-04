#include <iostream>                         
using namespace std;
int main()
{
    char choice;
    int nChoice;
    system("cls");
    cout << "\n\n\n\n\n";
    cout << "\t\t++++++++++++++++++++++++++++++++++++++++++++\n";
    cout << "\t\t+\t\t +：加法                   +\n";
    cout << "\t\t+\t\t -：减法                   +\n";
    cout << "\t\t+\t\t *：乘法                   +\n";
    cout << "\t\t+\t\t /：除法                   +\n";
    cout << "\t\t++++++++++++++++++++++++++++++++++++++++++++\n\n";
    cout << "\t\t请输入运算符（+ - * / ），退出程序输入0:";
    cin >> choice;
    int a, b;
    while (choice != '0') {
        cout << "\t\t输入a和b的值，用空格分开" << endl;
        cout << "\t\t";
        cin >> a >> b;
        switch (choice) {
        case '+':
            cout << "\t\t";
            cout << a << " + " << b << " = " << a + b << endl;
            break;
        case '-':
            cout << "\t\t";
            cout << a << " - " << b << " = " << a - b << endl;
        case '*':
            cout << "\t\t";
            cout << a << " * " << b << " = " << a * b << endl;
            break;
        case '/':
            cout << "\t\t";
            cout << a << " / " << b << " = " << a / b << endl;
            break;
        default:
            cout << "\t\t输入错误" << endl;
            break;
        }
        cout << "\t\t请输入运算符（+ - * / ），退出程序输入0";
        cin >> choice;
        cout << "\t\t输入a和b的值，用空格分开" << endl;
        cin >> a >> b;
    }
    return 0;
}