#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    cout<<fixed;
    cout.precision(2);
    while(T--){
        long double a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        cout<<"$";
        cout<<a*350.34+b*230.90+c*190.55+d*125.30+e*180.90<<"\n";
    }
}