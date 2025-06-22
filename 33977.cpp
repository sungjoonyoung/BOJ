#include<iostream>
#include<cmath>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int K;
    cin>>K;
    int tmpK=1;
    for(int i=1;i<=sqrt(K);i++){
        if(K%i==0)tmpK=i;
    }


    //cout<<tmpK<<"\n";
    cout<<tmpK+K/tmpK<<"\n";
    tmpK=K/tmpK;
    //cout<<tmpK;
    for(int i=1;i<tmpK+1;i++){
        cout<<i<<" "<<i+1<<"\n";
    }
    for(int i=1;i<K/tmpK;i++){
        cout<<i<<" "<<i+1+tmpK<<"\n";
    }
}