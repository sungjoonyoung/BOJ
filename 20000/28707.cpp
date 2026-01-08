#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<map>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define minpq(type) priority_queue<type, vector<type>, greater<type>>
#define maxpq(type) priority_queue<type>
using namespace std;
int N,M;
map<string,int> m;
vector<pair<pii,int>>adj;
priority_queue<pair<int,string>, vector<pair<int,string>>, greater<pair<int,string>>>pq;
void solve(void) {
    cin>>N;
    string str;
    for(int i=0;i<N;i++){
        int in;cin>>in;
        str.push_back((char)in);
    }
    cin>>M;
    for(int i=0;i<M;i++){
        int l,r,w;cin>>l>>r>>w;
        adj.push_back({{l-1,r-1},w});
    }
    pq.push({1,str});
    m[str]=1;
    while(!pq.empty()){
        string curstr=pq.top().second;
        int curvar=pq.top().first;
        pq.pop();
        if(curvar>m[curstr])continue;
        for(int i=0;i<M;i++){
            int l=adj[i].first.first;
            int r=adj[i].first.second;
            int w=adj[i].second;
            string tmp=curstr;
            swap(tmp[l],tmp[r]);
            if(m[tmp]==0 and tmp!=str)m[tmp]=2'000'000'000;
            if(curvar+w>=m[tmp])continue;
            pq.push({curvar+w,tmp});
            m[tmp]=curvar+w;
        }
    }

    
    sort(all(str));
    cout<<m[str]-1;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}