#include<bits/stdc++.h>
using namespace std;
int main(){
    double a, b, s;
    cin>>a>>b;
    double a_q = pow(a, 2.0);
    double b_q = pow(b, 2.0);
    double c = pow((a_q + b_q), 0.5);
    s = a*b/2;
    cout <<"面积为"<<s<<' '<<"斜边长为"<<c<< endl;
}