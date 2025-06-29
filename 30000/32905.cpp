#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    bool key=1;
    for(int i=0;i<N;i++){
        int A=0;
        for(int j=0;j<M;j++){
            char c;
            cin>>c;
            if(c=='A')A++;
        }
        if(key)key=(A==1);
    }
    if(key)cout<<"Yes";
    else cout<<"No";
}