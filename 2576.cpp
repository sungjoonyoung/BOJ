#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int minnum=1000;
    int answer=0;
    for(int i=0;i<7;i++){
        int in;
        cin>>in;
        if(in%2){
            answer+=in;
            minnum=min(minnum,in);
        }
    }
    if(answer==0)cout<<-1;
    else cout<<answer<<"\n"<<minnum;
}