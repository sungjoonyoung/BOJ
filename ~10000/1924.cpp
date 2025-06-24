#include<iostream>
#include<string>
using namespace std;
string arr[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x,y;
    cin>>x>>y;
    int count=0;
    for(int mon =1;mon<=12;mon++)for(int day=1;day<=31;day++){
        if(x==mon && y==day)cout<<arr[count%7];
        count++;
        if(mon==4 || mon==6 || mon==9 || mon==11){
            if(day==30)break;
        }
        if(mon==2){
            if(day==28)break;
        }
        
    }
    
}