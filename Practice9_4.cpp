#include<bits/stdc++.h>
using namespace std;
double score[1000000];
double  average(double n, double score[]){
    double sum = 0;
    for(int i = 0; i < n; i++){
        sum += score[i];
    }
    return sum / n;
}
int main(){
    int n = 0;
    cout<<"Enter the number of students:"<<endl;
    cin>>n;
    for(int i = 0; i < n; i++){
        cout<<"please enter the score of student of"<<(i + 1)<<endl;
        cin>>score[i];
    }
    int avr = average(n, score);
    cout<<"the average score of the students is "<<avr<<endl;
    return 0;
}