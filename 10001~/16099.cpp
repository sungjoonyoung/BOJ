#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        long long E,T;
        E=T=1;
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        E*=a*b;
        T*=c*d;
        if(E<T)cout<<"Eurecom\n";
        else if(E>T)cout<<"TelecomParisTech\n";
        else cout<<"Tie\n";
    }
}