#include<bits/stdc++.h>
using namespace std;
int isNarcissist(int n){//对三位数逐位取模，判断是否为水仙花数
    int ge = n % 10;
    int shi = (n / 10) % 10;
    int bai = n / 100;
    if(ge*ge*ge + shi*shi*shi + bai*bai*bai == n){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int n, k;
    cin>>n;
    k = isNarcissist(n);
    cout<<k<<endl;
    return 0;
}
