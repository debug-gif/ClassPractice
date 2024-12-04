//***************************************************************
//*  程 序 名：实训6_1.cpp                                      *
//*  主要功能：                                                 *
//*     使用顺序查找法查找学生成绩单                            *
//*     从最后一位学生到第一位学生依次进行比较，以下标0为监视哨 *
//***************************************************************
#include <iostream>                         // 包含输入输出接口文件
using namespace std;                        // 引用标准命名空间
int main()                                  // 主函数
{
    const int n = 10;                       // 使用常变量定义学生人数
    int score[n + 1] = {0, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98}; 
        // 定义成绩数组，有n+1个整型元素，其中下标0处未存放学生成绩
    int i;                                  // 循环变量
    int x;                                  // 等查找的学生成绩
    cout<<"请输入待查找的学生成绩：";
    cin>>x;
    score[0] = x;                           // 在下标处设置监视哨
    for(i = n; score[i] != x; i--); 
        // 计数循环，从后到前循环比较当前元素，循环体为空语句
    if(i >= 1)
    {
        cout<<"查找成功，待查找成绩是第"<<i<<" 位学生的成绩"<<endl;
    }
    else
    {
        cout<<"未查找到该成绩！"<<endl;
    }
    return 0;
}
