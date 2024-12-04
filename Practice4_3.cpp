#include<bits/stdc++.h>
using namespace std;
int main(){
    double score1, score2, score3, credit1, credit2, credit3, sum, avgScore;
    cout<<"输入这位同学的各科成绩"<<endl;
    cin >> score1 >> credit1 >> score2 >> credit2 >> score3 >> credit3;
    while(score1 > -1 && score2 > -1 && score3 > -1){
        avgScore = (score1 * credit1 + score2 * credit2 + score3 * credit3) / (credit1 + credit2 + credit3);
        cout<<"这位同学的加权平均分为"<<avgScore<<endl;
        cin >> score1 >> credit1 >> score2 >> credit2 >> score3 >> credit3;
    }
    return 0;
}