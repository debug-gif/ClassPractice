//***************************************************************
//*  程 序 名：实训4_1.cpp                                      *
//*  主要功能：                                                 *
//*     由键盘输入考生成绩，求平均值                            *
//***************************************************************
#include <iostream>                         // 包含输入输出接口文件
using namespace std;                        // 引用标准命名空间
int main()                                  // 定义主函数
{
    int i = 0;                              // 循环变量
    int num = 0;                            // 考生人数
    double score = 0;                       // 当前考生的成绩
    double sum = 0;                         // 总成绩
    double avg = 0;                         // 平均成绩
    cout << "请输入考生人数：";
    cin >> num;
    cout << "请逐一输入各位考生的成绩：" << endl;
    for(i = 1; i <= num; i++)
    {
        cin >> score;                       // 输入当前考生成绩
        sum = sum + score;                  // 累加
    }
    avg = sum / num;                        // 求平均值
    cout << "平均分是" << avg << endl;
    return 0;
}                                           // 主函数结束
