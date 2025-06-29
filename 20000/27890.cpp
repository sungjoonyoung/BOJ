#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x,N;
    cin>>x>>N;
    while(N--){
        if(x%2==0)x=(x/2)^6;
        else x=(x*2)^6;
    }
    cout<<x;
}