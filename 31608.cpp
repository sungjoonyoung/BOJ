#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a,b;
    cin>>a>>a>>b;
    int count=0;
    for(int i=0;i<a.size();i++)if(a[i]!=b[i])count++;
    cout<<count;
}