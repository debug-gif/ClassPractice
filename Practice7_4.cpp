#include<bits/stdc++.h>
using namespace std;
struct studentRecord{
    int id;
    string proid;
    string lessonId;
    int lessonMark;
    char stuId[20];
    double dailyGrade;
    double experimentGrade;
    double finalGrade;
    double semesterGrade;
};
struct studentRecord stu[1];
int main(){
    double maxdailyGrade = 0;
    double maxexperimentGrade = 0;
    double maxfinalGrade = 0;
    double maxsemesterGrade = 0;
    double mindailyGrade = 100;
    double minexperimentGrade = 100;
    double minfinalGrade = 100;
    double minsemesterGrade = 100;
    for(int i = 0;i < 1000;i++){
        stu[i].id = i;
        cin>>stu[i].proid;
        cin>>stu[i].lessonId;
        cin>>stu[i].lessonMark;
        cin>>stu[i].stuId;
        cin>>stu[i].dailyGrade;
        cin>>stu[i].experimentGrade;
        cin>>stu[i].finalGrade;
        stu[i].semesterGrade = stu[i].dailyGrade * 0.3 + stu[i].experimentGrade * 0.3 + stu[i].finalGrade * 0.4;
    }
    for(int j = 0;j < 1000;j++){
        if(stu[j].dailyGrade > maxdailyGrade){
            maxdailyGrade = stu[j].dailyGrade;
        }
        if(stu[j].experimentGrade > maxexperimentGrade){
            maxexperimentGrade = stu[j].experimentGrade;
        }
        if(stu[j].finalGrade > maxfinalGrade){
            maxfinalGrade = stu[j].finalGrade;
        }
        if(stu[j].semesterGrade > maxsemesterGrade){
            maxsemesterGrade = stu[j].semesterGrade;
        }
        if(stu[j].dailyGrade < mindailyGrade){
            mindailyGrade = stu[j].dailyGrade;
        }
        if(stu[j].experimentGrade < minexperimentGrade){
            
        }
        if(stu[j].finalGrade < minfinalGrade){
            minfinalGrade = stu[j].finalGrade;
        }
        if(stu[j].semesterGrade < minsemesterGrade){
            minsemesterGrade = stu[j].semesterGrade;
        }
    }
    cout<<"maxdailyGrade:"<<maxdailyGrade<<endl;
    cout<<"maxexperimentGrade:"<<maxexperimentGrade<<endl;
    cout<<"maxfinalGrade:"<<maxfinalGrade<<endl;
    cout<<"maxsemesterGrade:"<<maxsemesterGrade<<endl;
    cout<<"mindailyGrade:"<<mindailyGrade<<endl;
    cout<<"minexperimentGrade:"<<minexperimentGrade<<endl;
    cout<<"minfinalGrade:"<<minfinalGrade<<endl;
    cout<<"minsemesterGrade:"<<minsemesterGrade<<endl;
    return 0;
}