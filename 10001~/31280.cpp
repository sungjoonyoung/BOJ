#include<iostream>
#include<algorithm>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<a+b+c+d-min({a,b,c,d})+1;
}