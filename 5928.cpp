#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int d,h,m;
    cin>>d>>h>>m;
    m+=h*60+d*60*24;
    if(m-(60*24*11+60*11+11)<0)cout<<-1;
    else cout<<m-(60*24*11+60*11+11);
}