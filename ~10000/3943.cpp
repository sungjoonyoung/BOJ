#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int answer=N;
        while(N!=1){
            if(N%2==0)N=N/2;
            else N=N*3+1;
            answer=max(answer,N);
        }
        cout<<answer<<"\n";
    }
}