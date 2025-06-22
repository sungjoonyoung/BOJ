#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
vector<pair<int,int>> xv,yv,zv;
priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>,greater<>>pq;
int P[100000];
int find(int x){
    if(P[x]==x)return x;
    return P[x]=find(P[x]);
}
void uni(int x,int y){
    int px=find(x);
    int py=find(y);
    if(px<py)P[py]=P[px];
    else P[px]=P[py];
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    for(int i=0;i<N;i++)P[i]=i;
    for(int i=0;i<N;i++){
        int x,y,z;
        cin>>x>>y>>z;
        xv.push_back({x,i});
        yv.push_back({y,i});
        zv.push_back({z,i});
    }
    sort(xv.begin(),xv.end());
    sort(yv.begin(),yv.end());
    sort(zv.begin(),zv.end());
    for(int i=0;i<N-1;i++){
        pq.push({abs(xv[i].first-xv[i+1].first),{xv[i].second,xv[i+1].second}});
        pq.push({abs(yv[i].first-yv[i+1].first),{yv[i].second,yv[i+1].second}});
        pq.push({abs(zv[i].first-zv[i+1].first),{zv[i].second,zv[i+1].second}});
    }
    long long answer=0;
    for(int i=0;i<N-1;i++){
        int w=pq.top().first;
        int x=pq.top().second.first;
        int y=pq.top().second.second;
        pq.pop();
        if(find(x)==find(y)){
            i--;
            continue;
        }
        answer+=w;
        uni(x,y);
    }
    cout<<answer;
}