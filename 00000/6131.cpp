#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int count=0;
    int N;
    cin>>N;
    for(int i=1;i<=500;i++)for(int j=1;j<=500;j++){
        count+=(i*i==N+j*j);
    }
    cout<<count;
}