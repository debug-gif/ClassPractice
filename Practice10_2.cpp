///**********************************************************
///  程序名：实训10_2_1.cpp                                 *
///  主要功能：                                             *
///     输入学生信息，然后输出                              *
///**********************************************************
#include <iostream>
using namespace std;
struct Date                                 // 定义日期类型
{
    int year;                               // 年
    int month;                              // 月
    int day;                                // 日
};
struct StudentInfo                          // 定义学生信息结构体类型
{
    char no[20];                            // 学号
    char name[20];                          // 姓名
    char password[20];                      // 密码
    int sexy;                               // 性别（1为男，0为女）
    double height;                          // 身高
    double weight;                          // 体重
    char telephone[20];                     // 电话
    char e_mail[40];                        // E_mail
    char qq[20];                            // QQ号
    Date birthday;                          // 生日
};
void readStudent(StudentInfo *stu);         // 申明读入学生信息函数
void writeStudent(StudentInfo &stu);        // 申明输出学生信息函数
int main()
{
    StudentInfo stu;                        // 定义学生信息结构体变量
    cout<<"请输入学生信息："<<endl;
    readStudent(&stu);
    cout<<"你输入的学生信息如下："<<endl;
    writeStudent(stu);
    return 0;
}
///**********************************************************
///  函数名：readStudent                                    *
///  输入参数：                                             *
///      学生信息结构体指针                                 *
///  返回值                                                 *
///      无                                                 *
///  函数功能：                                             *
///      从键盘输入学生信息                                 *
///**********************************************************
void readStudent(StudentInfo *stu)          // 读入学生信息
{
    fflush(stdin);                          // 清空输入缓冲区
    cout<<"  姓名：\t\t";
    gets_s(stu->name, 20);
    cout<<"  学号：\t\t";
    cin>>stu->no;
    cout<<"  密码：\t\t";
    cin>>stu->password;
    cout<<"  性别(0为女, 1为男)：\t";
    cin>>stu->sexy;
    cout<<"  生日："<<endl;
    cout<<"    年：\t\t";
    cin>>stu->birthday.year;
    cout<<"    月：\t\t";
    cin>>stu->birthday.month;
    cout<<"    日：\t\t";
    cin>>stu->birthday.day;
    cout<<"  身高：\t\t";
    cin>>stu->height;
    cout<<"  体重：\t\t";
    cin>>stu->weight;
    fflush(stdin);                          // 清空输入缓冲区
    cout<<"  电话：\t\t";
    cin>>stu->telephone;
    fflush(stdin);                          // 清空输入缓冲区
    cout<<"  E_mail：\t\t";
    cin>>stu->e_mail;
    fflush(stdin);                          // 清空输入缓冲区
    cout<<"  QQ号：\t\t";
    cin>>stu->qq;
}
void writeStudent(StudentInfo &stu) 
{                                           // 输出学生信息
    cout<<"  姓名：\t\t"<<stu.name<<endl;
    cout<<"  学号：\t\t"<<stu.no<<endl;
    cout<<"  性别：\t\t"<<(stu.sexy==1?"男":"女")<<endl;
    cout<<"  生日：\t\t"<<stu.birthday.year<<"年"
        <<stu.birthday.month<<"月"<<stu.birthday.day<<"日"<<endl;
    cout<<"  身高：\t\t"<<stu.height<<endl;
    cout<<"  体重：\t\t"<<stu.weight<<endl;
    cout<<"  电话：\t\t"<<stu.telephone<<endl;
    cout<<"  E_mail：\t\t"<<stu.e_mail<<endl;
    cout<<"  QQ号：\t\t"<<stu.qq<<endl;
}
