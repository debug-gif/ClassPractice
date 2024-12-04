#include<bits/stdc++.h>
using namespace std;
struct section{
    char id[100];
    char name[100];
    double GPA;
    int time;
    double week_Time;
    int semester;
}section[100];
bool cmp(section a, section b){
    return a.GPA > b.GPA;
}
int main(){
    for(int i = 0;i < 100;i++){
        cout<<"请输入课程编号：";
        gets(section[i].id);
        cout<<"请输入课程名称：";
        gets(section[i].name);
        cout<<"请输入课程学分：";
        cin>>section[i].GPA;
        cout<<"请输入课程学时：";
        cin>>section[i].time;
        cout<<"请输入课程周学时：";
        cin>>section[i].week_Time;
        cout<<"请输入课程学期：";
        cin>>section[i].semester;
    }
    sort(section, section + 100, cmp);
    for(int j = 0; j < 100;j++){
        printf("课程编号：%s\n", section[j].id);
        printf("课程名称：%s\n", section[j].name);
        printf("课程学分：%lf\n", section[j].GPA);
        printf("课程学时：%d\n", section[j].time);
        printf("课程周学时：%lf\n", section[j].week_Time);
        printf("课程学期：%d\n", section[j].semester);
    }
    return 0;
}
