#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B;
    cin>>A>>B;
    int K,X;
    cin>>K>>X;
    int count=0;
    for(int i=A;i<=B;i++){
        if(K-X<=i && i<=K+X)count++;
    }
    if(count)cout<<count;
    else cout<<"IMPOSSIBLE";
}