#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> v;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        string str;
        while(N--){
            cin>>str;
            if(T==0)v.push_back(str);
        }
    }
    cout<<v.size()<<"\n";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"\n";
    }
}