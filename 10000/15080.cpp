#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    char c;
    int h,m,s,hh,mm,ss;
    cin>>h>>c>>m>>c>>s>>hh>>c>>mm>>c>>ss;
    s+=m*60+h*60*60;
    ss+=mm*60+hh*60*60+60*60*24;
    ss-=s;
    ss%=60*60*24;
    cout<<ss;
}