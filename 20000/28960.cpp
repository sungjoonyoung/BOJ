#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h,l,a,b;
    cin>>h>>l>>a>>b;
    if(l>=a and h*2>=b)cout<<"YES";
    else if(l>=b and h*2>=a)cout<<"YES";
    else cout<<"NO";
}