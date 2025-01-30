#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int in;
    cin>>in;
    if(in<=100000 and in%2024==0)cout<<"Yes";
    else cout<<"No";
}