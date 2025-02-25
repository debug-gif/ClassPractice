//***************************************************************
//*  程 序 名：实训8_1.cpp                                      *
//*  主要功能：                                                 *
//*     首先输入学生成绩，然后统计最高分以及获取最高分的学生数  *
//***************************************************************
#include <iostream>                         // 包含输入输出接口文件
using namespace std;                        // 引用标准命名空间
int main()                                  // 主函数
{
    const int n = 5;                        // 使用常变量定义学生人数
    int score[n];                           // 定义成绩数组，有n个整型元素
    int maxScore = 0;                       // 最高分，并初始化为
    int maxStudent = 0;                     // 得到最高分的学生人数
    int i;                                  // 循环变量
    int *p = 0;
    p = score;                              // p指向score[0]
    for(i = 0; i < n; i++)                  // 计数循环
    {                                       // 开始循环
        cout<<"请输入第"<<i + 1<<"位学生的成绩：";
        cin>>p[i];                          // 输入第i位学生的成绩，并存储到score[i]
        if(maxScore < p[i])                 // 如果第i位学生的成绩高于原最高分
        {
            maxScore = p[i];                // 将最高分修改为第i位学生的成绩
        }
    }                                       // 结束循环
    cout<<"本班最高分为"<<maxScore<<endl;
    cout<<"得到最高分的学生序号为："<<endl;
    for(i = 0; i < n; i++)                  // 计数循环
    {                                       // 循环开始
        if(*(p + i) == maxScore)            // 如果第i位学生的成绩等于最高分
        {
            maxStudent++;                   // 得最高分的学生人数增1
            cout<<i<<endl;                  // 输出该生序号
        }
    }                                       // 循环结束
    cout<<"共有"<<maxStudent<<"位学生得到最高分"<<endl;
    return 0;
}                                           //主函数结束
