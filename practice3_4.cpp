#include<bits/stdc++.h>
using namespace std;
int main(){
    double csp, fee;//csp:用电量
    cin>>csp;
    if(csp <= 180){
        fee = csp * 0.5224;
    }else if(181 <= csp && csp <= 280){
        fee = 180 * 0.5224 + (csp - 180) * 0.6224;
    }else{
        fee = 180 * 0.5224 + 100 * 0.6224 + (csp - 280) * 0.8224;
    }
    cout<<fee<<endl;
    return 0;
}