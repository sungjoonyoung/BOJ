#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
int answer[50];
vector<pair<int,int>> v;
int main(void){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int in;
        cin>>in;
        v.push_back({in,i});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        answer[v[i].second]=i;
    }
    for(int i=0;i<N;i++)cout<<answer[i]<<" ";
}