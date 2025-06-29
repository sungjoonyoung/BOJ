#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string str;
    cin>>str;
    if(str=="miss")cout<<0;
    if(str=="bad")cout<<200*n;
    if(str=="cool")cout<<400*n;
    if(str=="great")cout<<600*n;
    if(str=="perfect")cout<<1000*n;
}