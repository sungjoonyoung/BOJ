#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    int answer;
    cin>>answer;
    int maxnum=answer;
    for(int i=0;i<N;i++){
        int a,b;
        cin>>a>>b;
        answer+=a;
        answer-=b;
        if(answer<0){
            cout<<0;
            return 0;
        }
        maxnum=max(maxnum,answer);
    }
    cout<<maxnum;
}