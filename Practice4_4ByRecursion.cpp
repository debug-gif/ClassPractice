#include<bits/stdc++.h>
using namespace std;
long long fact(long long a){
    if(a == 1 || a == 0){
        return 1;
    }else{
        long long n = a * fact(a - 1);
        return n;
    }
}
int main(){
    long long q, sum = 0;
    cin>>q;
    for(int i = 1; i <= q; i++){
        sum += fact(i);
    }
    cout<<sum<<endl;
       return 0;
}