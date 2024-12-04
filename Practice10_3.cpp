#include<bits/stdc++.h>
using namespace std;
int arr[100];
int n;
int Fibonacci(int n){
    if(n == 1 || n == 2){
        return 1;
    }else{
        int sum = Fibonacci(n-1) + Fibonacci(n-2);
        return sum;
    }
}
int main()
{
    cin>> n;
    for(int i = 0; i <n; i++){
        arr[i] = Fibonacci(i+1);
    }
    /*for(int j = 0; j < n; j++){
        cout<< arr[j] << " ";
    }*/
    cout<<arr[n-1];
    return 0;
}
