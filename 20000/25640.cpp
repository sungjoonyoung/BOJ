#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int N;
    cin>>N;
    int count=0;
    while(N--){
        string tmp;
        cin>>tmp;
        if(tmp==s)count++;
    }
    cout<<count;
}