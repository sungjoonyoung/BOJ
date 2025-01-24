#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int w,h,n,a,b;
    cin>>w>>h>>n>>a>>b;
    if(w<a or h<b)cout<<-1;
    else cout<<(n-1)/((w/a)*(h/b))+1;
}