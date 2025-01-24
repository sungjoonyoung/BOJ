#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long h,l,b;
    cin>>h>>l>>b;
    l-=h;
    cout<<l/b+(l%b?1:0);
}