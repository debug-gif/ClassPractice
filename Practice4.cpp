#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long double n = pow(1.0/3.0, -2.0) + 
            pow((pow(2010.0, 1.0/2.0) - pow(2012.0, 1.0/2.0)), 0);
    cout<<n;
    return 0;
}