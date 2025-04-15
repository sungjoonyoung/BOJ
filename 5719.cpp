#include<iostream>
#include<queue>
#include<utility>
#include<vector>
#include<climits>
using namespace std;
vector<pair<int,int>> map[501];
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
bool fix[501];
int v[501][501];
int N, M;
int S,E;
void solve(void);
void DFS(int x);
int main(void){
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    while(1){
        cin>>N>>M;
        if(N==0 and M==0)break;
        solve();
    }
}
void solve(void){
    cin>>S>>E;
    fill(v[0],v[500],0);
    for(int i=0;i<N;i++){
        fix[i]=0;
        map[i].clear();
        map[i].push_back({INT_MAX,0});
    }
    for(int i=0;i<M;i++){
        int x,y,w;
        cin>>x>>y>>w;
        v[x][y]=w;
    }
    pq.push({0,S});
    while(!pq.empty()){
        int curw=pq.top().first;
        int curs=pq.top().second;
        pq.pop();
        //fix[cure]=1;
        if(map[curs].back().first<curw)continue;
        for(int i=0;i<N;i++){
            if(v[curs][i]==0)continue;
            int tmpw=v[curs][i];
            if(curw+tmpw>map[i].back().first)continue;
            if(curw+tmpw!=map[i].back().first)pq.push({curw+tmpw,i});
            if(curw+tmpw<map[i].back().first)map[i].clear();
            map[i].push_back({curw+tmpw,curs});
        }
    }
    //cout<<map[E].top().first<<"\n";
    DFS(E);
    

    for(int i=0;i<N;i++){
        fix[i]=0;
        map[i].clear();
        map[i].push_back({INT_MAX,0});
    }
    pq.push({0,S});
    while(!pq.empty()){
        int curw=pq.top().first;
        int curs=pq.top().second;
        pq.pop();
        //fix[cure]=1;
        if(map[curs].back().first<curw)continue;
        for(int i=0;i<N;i++){
            if(v[curs][i]==0)continue;
            int tmpw=v[curs][i];
            if(curw+tmpw>map[i].back().first)continue;
            if(curw+tmpw!=map[i].back().first)pq.push({curw+tmpw,i});
            if(curw+tmpw<map[i].back().first)map[i].clear();
            map[i].push_back({curw+tmpw,curs});
        }
    }
    if(map[E].back().first!=INT_MAX)cout<<map[E].back().first<<"\n";
    else cout<<"-1\n";
}
void DFS(int x){
    if(x==S)return;
    if(fix[x]==1)return;
    fix[x]=1;
    int tmp=map[x].back().first;
    while(map[x].back().first==tmp){
        int b=map[x].back().second;
        map[x].pop_back();
        v[b][x]=0;
        //if(fix[b])continue;
        //fix[b]=1;
        DFS(b);
    }
}