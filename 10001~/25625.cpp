#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x,y;
    cin>>x>>y;
    if(y<x)cout<<x+y;
    else cout<<y-x;
}