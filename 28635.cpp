#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m,a,b;
    cin>>m>>a>>b;
    int count=0;
    while(a!=b){
        a%=m;
        a++;
        count++;
    }
    cout<<count;
}