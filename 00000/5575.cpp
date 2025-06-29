#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;i<3;i++){
        int h,m,s,hh,mm,ss;
        cin>>h>>m>>s>>hh>>mm>>ss;
        s+=m*60+h*60*60;
        s-=mm*60+hh*60*60+ss;
        cout<<-s/60/60<<" ";
        s%=60*60;
        cout<<-s/60<<" ";
        s%=60;
        cout<<-s<<"\n";
    }
}