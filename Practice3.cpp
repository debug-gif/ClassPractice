#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double n = -1.0/2.0 + 1.0/3.0 * 2/pow(3.0, 1.0/2.0) - abs(tan(45.0*acos(-1.0)/180.0) - pow(3, 1.0/2.0));
    cout<<n<<endl;
    return 0;
}