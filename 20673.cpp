#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int p,q;
    cin>>p>>q;
    if(p<=50 and q<=10)cout<<"White";
    else if(q>30)cout<<"Red";
    else cout<<"Yellow";
}