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
        long double d,n,p;
        cin>>d>>n>>p;
        cout<<"$"<<d*n*p<<"\n";
    }
}