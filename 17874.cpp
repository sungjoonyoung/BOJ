#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,h,v;
    cin>>n>>h>>v;
    cout<<max(h,n-h)*max(v,n-v)*4;
}