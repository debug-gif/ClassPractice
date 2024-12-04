///***************** *****************************************
///  程序名：实训10_1.cpp                                    *
///  功能                                                    *
///      根据学号查询学生信息                                *
///***********************************************************
#include <iostream>
#include <cstring>
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
struct StudentList                          // 学生信息表结构体类型
{
    StudentInfo  data[100];                 // 存储学生信息的数组
    int length;                             // 学生人数
};
int searchStudentByNo(StudentList &stuList, char no[]);// 申明searchStudentByNo函数
void writeStudent(StudentInfo stu);         // 输出学生信息
int main()
{
    const int nStudent = 5;
    StudentList stuList = {{{""},           // 定义学生信息表并初始化
                {"2013141442001", "赵小一", "123456", 1, 1.70, 70.0, 
                   "13612345678", "", "", {1995,1,1}}, 
                {"2013141442002", "钱小二", "123456", 0, 1.60, 50.0,
                   "13623456781", "", "", {1995,2,2}}, 
                {"2013141442003", "孙小三", "123456", 1, 1.72, 71.0,
                   "13634567812", "", "", {1995,3,3}}, 
                {"2013141442004", "李小四", "123456", 0, 1.64, 60.0, 
                   "13645678123", "", "", {1995,4,4}}, 
                {"2013141442005", "周小五", "123456", 1, 1.78, 75.0, 
                   "13656781234", "", "", {1995,5,5}}
    }, nStudent};
    char no[20] = "";                       // 要查找的学生学号
    int nIndex = 0;                         // 查找到的学生序号
    cout<<"学生信息列表："<<endl;
for(int i=1; i<=stuList.length; i++)
	writeStudent(stuList.data[i]);
    cout<<"请输入要查找的学生学号：";
    cin>>no;
    nIndex = searchStudentByNo(stuList, no);// 调用函数查找学生学号
    if(nIndex < 1)
    {
        cout<<"未找到你输入的学生学号！"<<endl;
    }
    else
    {
        cout<<"查找成功，学生信息为："<<endl;
        writeStudent(stuList.data[nIndex]); // 输出查找到的学生信息
    }
    return 0;
}
void writeStudent(StudentInfo stu)          // 输出学生信息
{
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
///**********************************************************
///  函数名：searchStudentByNo                              *
///  输入参数                                               *
///      stuList    学生信息表                              *
///      no         待查学生的学号                          *
///  返回值                                                 *
///      整型     为0表示查找不成功                         *
///               大于0为查找到的学生的下标                 *
///  函数功能：                                             *
///      根据学号查找学生信息                               *
///  算法                                                   *
///      使用顺序查找法查找，在下标处设置监视哨             *
///**********************************************************
int  searchStudentByNo(StudentList &stuList, char no[])
{
    int n = stuList.length;                 // 表长
    int i = 0;                              // 待查找下标
    strcpy(stuList.data[0].no, no);         // 设置监视哨
    for(i=n; strcmp(stuList.data[i].no, no) != 0; i--); // 顺序查找
    return i;                               // 返回查找结果
}
