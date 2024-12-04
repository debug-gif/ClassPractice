#include <iostream>                         // 包含输入输出接口文件
using namespace std;
int main()                                  // 定义主函数
{                                           // 主函数开始
    char choice;                            // 模块号（字符）
    int nChoice;                            // 模块号（数字）
    system("cls");
    cout << "\n\n\n\n\n";
    cout << "\t\t|---------------学生选课系统(学生版)------------|\n";
    cout << "\t\t|\t 0. 返回                               |\n";
    cout << "\t\t|\t 1. 学生信息管理                       |\n";
    cout << "\t\t|\t 2. 教师信息信息                       |\n";
    cout << "\t\t|\t 3. 课程信息管理                       |\n";
    cout << "\t\t|\t 4. 学生选课信息                       |\n";
    cout << "\t\t|\t 5. 学生成绩管理                       |\n";
    cout << "\t\t|\t 6. 信息统计模块                       |\n";
    cout << "\t\t|-----------------------------------------------|\n\n";
    cout << "\t\t\t请输入模块编号(0-6):";
    cin >> choice;
    while (choice != '0') {
        if (choice < '0' || choice > '9') {
            cout << "模块号应为数字！" << endl;
            return 1;
        }
        nChoice = choice - '0';
        switch (nChoice) {
        case 0:
            cout << "你输入的模块名称为：0. 返回" << endl;
            break;
        case 1:
            cout << "你输入的模块名称为：1. 学生信息管理" << endl;
            break;
        case 2:
            cout << "你输入的模块名称为：2. 教师信息信息" << endl;
            break;
        case 3:
            cout << "你输入的模块名称为：3. 课程信息管理" << endl;
            break;
        case 4:
            cout << "你输入的模块名称为：4. 学生选课信息" << endl;
            break;
        case 5:
            cout << "你输入的模块名称为：5. 学生成绩管理" << endl;
            break;
        case 6:
            cout << "你输入的模块名称为：6. 信息统计模块" << endl;
            break;
        default:
            cout << "你输入的模块不存在！" << endl;
        }
        cout << "\t\t\t请输入模块编号:";
        cin >> choice;
    }
    return 0;
}
