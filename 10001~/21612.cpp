#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    N=N*5-400;
    cout<<N<<"\n";
    if(N<100)cout<<1;
    else if(N>100)cout<<-1;
    else cout<<"0";
}