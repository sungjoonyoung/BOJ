#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    int in;
    for(int i=0;i<N*M;i++)cin>>in;
    if(N<8)cout<<"unsatisfactory";
    else cout<<"satisfactory";
}