#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    cout<<min(a,min(b,c))+min(d,e)-50;
}