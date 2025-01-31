#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,X,K;
    cin>>N>>X>>K;
    while(K--){
        int x,y;
        cin>>x>>y;
        if(x==X)X=y;
        else if(y==X)X=x;
    }
    cout<<X;
}