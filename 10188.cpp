#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int N,M;
        cin>>M>>N;
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++)cout<<"X";
            cout<<"\n";
        }
        cout<<"\n";
    }
}