#include<bits/stdc++.h>
using namespace std;
int main(){
    double hour, salary, tax;
    scanf("%lf", &hour);
    salary = hour * 30;
    tax = salary * 0.1;
    double net = salary - tax;
    cout<<net<<endl;
    return 0;
}