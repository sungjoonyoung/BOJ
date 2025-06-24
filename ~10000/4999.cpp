#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a,b;
    cin>>a>>b;
    if(a.size()>=b.size())cout<<"go";
    else cout<<"no";
}