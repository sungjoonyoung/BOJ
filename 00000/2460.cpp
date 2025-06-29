#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int answer=0;
    int tmp=0;
    for(int i=0;i<10;i++){
        int out,in;
        cin>>out>>in;
        tmp-=out;
        tmp+=in;
        tmp=min(tmp,10000);
        answer=max(answer,tmp);
    }
    cout<<answer;
}