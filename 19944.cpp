#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    if(M<=2)cout<<"NEWBIE!";
    else if(M<=N)cout<<"OLDBIE!";
    else cout<<"TLE!";
}