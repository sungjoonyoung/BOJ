#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    int a,b;
    cin>>a>>b;
    a*=b;
    cout<<(a+(4840*5)-1)/(4840*5);
}