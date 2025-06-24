#include<iostream>
#include<queue>
#include<vector>
#include<utility>
using namespace std;
vector<pair<int,int>> v[1001];
vector<pair<int,int>> bv[1001];
struct cmp{
    bool operator()(pair<int,int> a,pair<int,int> b){
        return a.first>b.first;
    }
};
priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pq;
priority_queue<pair<int,int>> bq;
int arr[1001];
int bac[1001];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M,X;
    cin>>N>>M>>X;
    for(int i=0;i<M;i++){
        int s,e,w;
        cin>>s>>e>>w;
        v[s].push_back({e,w});
        bv[e].push_back({s,w});
    }
    fill(arr,arr+N+1,100000000);
    fill(bac,bac+N+1,100000000);
    pq.push({0,X});
    arr[X]=0;
    while(!pq.empty()){
        int curx=pq.top().second;
        int curw=pq.top().first;
        pq.pop();
        //if(arr[curx]!=curw)continue;
        if(!v[curx].empty())for(int i=0;i<v[curx].size();i++){
            int tmpx=v[curx][i].first;
            int tmpw=v[curx][i].second+curw;
            arr[tmpx]=min(arr[tmpx],tmpw);
            if(tmpw!=arr[tmpx])continue;
            pq.push({tmpw,tmpx});
        }
    }
    bq.push({0,X});
    bac[X]=0;
    while(!bq.empty()){
        int curx=bq.top().second;
        int curw=bq.top().first;
        bq.pop();
        //if(bac[curx]!=curw)continue;
        if(!bv[curx].empty())for(int i=0;i<bv[curx].size();i++){
            int tmpx=bv[curx][i].first;
            int tmpw=bv[curx][i].second+curw;
            bac[tmpx]=min(bac[tmpx],tmpw);
            if(tmpw!=bac[tmpx])continue;
            bq.push({tmpw,tmpx});
        }
    }
    int answer=0;
    for(int i=1;i<=N;i++)if(i!=X)answer=max(answer,arr[i]+bac[i]);
    cout<<answer;
}