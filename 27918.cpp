#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    int D,P;
    D=P=0;
    while(N--){
        char c;
        cin>>c;
        if(abs(D-P)==2)continue;
        if(c=='D')D++;
        else P++;
    }
    cout<<D<<":"<<P;
}