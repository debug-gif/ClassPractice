/*这个程序只需做n次乘法*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long ans = 1;
    long long sum = 0;
    for(long long i = 1; i <= n; i++){
        ans *= i;
        sum += ans;
    }
    cout << "1!+2!+...+" << n << "!=" << sum << endl;
    return 0;
}