#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    int a,b,c,d,e;
    a=b=c=d=e=0;
    while(T--){
        int x,y;
        cin>>x>>y;
        if(x>0 and y>0)a++;
        else if(x<0 and y>0)b++;
        else if(x<0 and y<0)c++;
        else if(x>0 and y<0)d++;
        else e++;
    }
    cout<<"Q1: "<<a<<"\n";
    cout<<"Q2: "<<b<<"\n";
    cout<<"Q3: "<<c<<"\n";
    cout<<"Q4: "<<d<<"\n";
    cout<<"AXIS: "<<e<<"\n";
}