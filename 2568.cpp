#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<utility>
using namespace std;
int visited[500001];
struct struc{
    int x,y,w;
};
struct strv{
    int x,b,w;
};
struct cmp{
    bool operator ()(struct struc a,struct struc b){
        return a.x>b.x;
    }
};
vector<struct strv> arr[100001];
priority_queue<struct struc,vector<struct struc>,cmp> pq;
int twofind(int x,int ind){
    int s,e,m;
    s=0;
    e=ind;
    while(s+1!=e){
        m=(s+e)/2;
        int mx=arr[m].back().x;
        if(mx<x)s=m;
        else if(mx>x)e=m;
    }
    return e;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        int x,y;
        cin>>x>>y;
        pq.push({x,y,i});
        visited[x]=1;
    }
    int ind=0;
    arr[0].push_back({-1,0,0});
    while(!pq.empty()){
        int x,y,w;
        x=pq.top().x;
        y=pq.top().y;
        w=pq.top().w;
        pq.pop();
        if(arr[ind].back().x<y){
            ind++;
            arr[ind].push_back({y,arr[ind-1].size(),x});
        }
        else{
            //cout<<"A"<<y<<" "<<ind;
            int f=twofind(y,ind);
            arr[f].push_back({y,arr[f-1].size(),x});
        }
    }
    cout<<N-ind<<"\n";
    int before=arr[ind].size()-1;
    for(int i=ind;i>0;i--){
        visited[arr[i][before].w]=0;
        before=arr[i][before].b-1;
    }
    for(int i=1;i<500001;i++)if(visited[i])cout<<i<<"\n";
}