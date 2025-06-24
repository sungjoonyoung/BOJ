#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(i%2==0&&j%2==0)cout<<"*";
            else if(i%2==1&&j%2==1)cout<<"*";
            else cout<<".";
        }
        cout<<"\n";
    }
}