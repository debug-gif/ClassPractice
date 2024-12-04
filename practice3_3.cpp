#include<bits/stdc++.h>
using namespace std;
int main(){
    long double a, b, c, delta, x1, x2, s;//s是当a极小时的解
    cin >> a >> b >> c;
    delta = b*b - 4*a*c;
    if(a < 0.00001){//这里将a < 0.00001作为a == 0的判断条件，因为double类型无法精确表示0，所以用0.00001作为判断条件,且0.00001时a以足够小，完全可以忽略。
        s = -b/c;
    }
    if(delta > 0){
        x1 = (-b + sqrt(delta))/(2*a);//求根公式
        x2 = (-b - sqrt(delta))/(2*a);//求根公式
        cout<<"x1="<<x1<<"\n"<<"x2="<<x2<<endl;
    }
    if(delta == 0){
        x1 = x2 = -b/(2 * a);
        cout<<"x1="<<x1<<"\n"<<"x2="<<x2<<endl;
    }
    if(delta < 0){
        long double real1 = -b/(2*a);//虚数根的实部
        long double real2 = sqrt(-delta)/(2*a);//虚数根的虚部
        cout<<"x1="<<real1<<"+"<<real2<<"i\n"<<"x2="<<real1<<"-"<<real2<<"i"<<endl;//虚数为实部+虚部i，由于C/C++不支持虚数，所以用字符串输出
    }
    return 0;
}