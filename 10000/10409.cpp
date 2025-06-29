#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,W;
    cin>>N>>W;
    for(int i=0;i<N;i++){
        int in;
        cin>>in;
        W-=in;
        if(W<0){
            cout<<i;
            return 0;
        }
    }
    cout<<N;
}