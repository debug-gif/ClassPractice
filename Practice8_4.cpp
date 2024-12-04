#include<bits/stdc++.h>
using namespace std;
struct classe{
    string classID;
    string className;
    double credit;
    int hours;
    double weekHours;
    int semester;
}classe[10];
struct classe *p;
int main(){//sort the classes by classID using pointer
    for(int i = 0; i < 10; i++){
        cin >> classe[i].classID >> classe[i].className >> classe[i].credit >> classe[i].hours >> classe[i].weekHours >> classe[i].semester;
    }
    for(int i = 0; i < 10; i++){
        sort(classe[i].classID.begin(), classe[i].classID.end());
    }
    for(int i = 0; i < 10; i++){
        cout << classe[i].classID << " " << classe[i].className << " " << classe[i].credit << " " << classe[i].hours << " " << classe[i].weekHours << " " << classe[i].semester << endl;
    }
    return 0;
}