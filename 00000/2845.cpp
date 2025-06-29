#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    N*=M;
    for(int i=0;i<5;i++){
        int in;
        cin>>in;
        cout<<in-N<<" ";
    }
}