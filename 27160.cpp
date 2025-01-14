#include<iostream>
#include<map>
#include<string>
using namespace std;
map<string,int> m;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    while(N--){
        string str;
        int in;
        cin>>str;
        cin>>in;
        m[str]+=in;
    }
    for(auto a:m)if(a.second==5){
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
}