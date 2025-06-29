#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        int N;
        cin>>N;
        if(N==0)break;
        int answer=1;
        for(int i=0;i<N;i++){
            int x,y;
            cin>>x>>y;
            answer*=x;
            answer-=y;
        }
        cout<<answer<<"\n";
    }
}