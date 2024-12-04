//这个程序将采用二分法求这个方程的根。
#include<bits/stdc++.h>
using namespace std;
double f(double x){
    return x*x*x-2*x*x+2;
}
double binary_search(double l, double r, double e){
    double mid;
    while(r - l > e){
        mid = (l + r)/2;
        if(f(mid) > 0){
            r = mid;
        }else{
            l = mid;
        }
    }
    if(f(l) * f(r) > 0){
        return -1;
    }
    return mid;
}
int main(){
    double l = -5.0, r = 5.0, e = 0.0001;
    double root = binary_search(l, r, e);
    if(root == -1){
        cout<<"不能保证区间内有根"<<endl;
    }else{
        cout<<"The root of the equation is "<<root<<endl;
    }
    return 0;
}