#include<iostream>
#include<queue>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
vector<int> v;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int a,b;
        cin>>a>>b;
        pq.push({a,b});
    }
    while(!pq.empty()){
        int a,b;
        tie(a,b)=pq.top();
        pq.pop();
        if(v.empty() or v.back()<b)v.push_back(b);
        else{
            for(int i=0;i<v.size();i++){
                if(v[i]>b){
                    v[i]=b;
                    break;
                }
            }
        }
    }
    cout<<N-v.size();
}