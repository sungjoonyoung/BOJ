#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    cout<<fixed;
    cout.precision(2);
    while(T--){int N;
    cin>>N;
    long double tmp=1e-30;
    while(N--){
        string str;
        cin>>str;
        long double n,m;
        cin>>n>>m;
        tmp+=n*m;
    }
    cout<<"$"<<tmp<<"\n";}
}