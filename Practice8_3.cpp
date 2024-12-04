#include<bits/stdc++.h>
using namespace std;
int main(){//reverse the string by using pointer
    char str[] = "DcbA";
    char *p = str;
    for(int i = 0; i < 4; i++){
        cout<<*(p+i);
    }
    return 0;
}