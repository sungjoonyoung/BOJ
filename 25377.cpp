#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    int answer=1'000'000'000;
    int key=0;
    while(N--){
        int a,b;
        cin>>a>>b;
        if(b>=a){
            answer=min(answer,b);
            key=1;
        }
    }
    if(key)cout<<answer;
    else cout<<-1;
}