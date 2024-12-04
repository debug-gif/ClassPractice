#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[80];
    scanf("%[^\n]", s);
    int n = strlen(s);
    for(int i = 0; i < n; i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i] = s[i] - 'a' + 'A';
        }
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] - 'A' + 'a';
    }
    for(int i = n; i >= 0; i--){
        cout<<s[i];
    }
    return 0;
    }
}