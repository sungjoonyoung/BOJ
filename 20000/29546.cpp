#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> v;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    cin>>N;
    for(int i=0;i<N;i++){
        int a,b;
        cin>>a>>b;
        for(int j=a-1;j<b;j++)cout<<v[j]<<"\n";
    }
}