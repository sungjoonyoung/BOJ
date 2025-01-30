#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        int a,d,b;
        cin>>a>>d>>b;
        if(a==d and d==b and a==0)break;
        if(abs((b-a)%d))cout<<"X";
        else if(d>0 and a>b)cout<<"X";
        else if(d<0 and a<b)cout<<"X";
        else cout<<(b-a)/d+1;
        cout<<"\n";
    }
}