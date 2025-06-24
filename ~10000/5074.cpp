#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        int h,m,hh,mm;
        char c;
        cin>>h>>c>>m>>hh>>c>>mm;
        m+=h*60;
        mm+=hh*60;
        m+=mm;
        if(m==0)break;
        int key=m/(60*24);
        m%=60*24;
        if(m/60<10)cout<<0;
        cout<<m/60<<":";
        if(m%60<10)cout<<0;
        cout<<m%60;
        if(key)cout<<" +"<<key;
        cout<<"\n";
    }
}