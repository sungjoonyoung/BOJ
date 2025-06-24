#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        int in;
        cin>>in;
        cout<<"Case #"<<i<<": ";
        if(in<=25)cout<<"World Finals";
        else if(in<=1000)cout<<"Round 3";
        else if(in<=4500)cout<<"Round 2";
        else cout<<"Round 1";
        cout<<"\n";
    }
}