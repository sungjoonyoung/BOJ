#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    int count=0;
    for(int i=1;i<=N;i++){
        if(N%i==0){
            count++;
            if(count==M){
                cout<<i;
                return 0;
            }
        }
    }
    cout<<0;
}