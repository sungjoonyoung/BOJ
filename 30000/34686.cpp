#include<iostream>
#include<utility>
#include<algorithm>
#include<vector>
using namespace std;
int L[1001];
int rel[1001][1001];
vector<int> adj[1001];
vector<pair<int,int>> edge;
int new_rel[1001][1001];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;cin>>N>>M;
    for(int i=1;i<=N;i++)cin>>L[i];
    for(int i=0;i<M;i++){
        int x,y;cin>>x>>y;
        rel[x][y]=rel[y][x]=1;
        edge.push_back({x,y});
    }
    sort(edge.begin(),edge.end());
    int answer=-1;
    for(int j=0;j<edge.size();j++){
        int x,y,z;
        x=edge[j].first;
        y=edge[j].second;
        for(int i=x+1;i<=N;i++){
            int op=rel[y][i];
            z=i;
            if(op){
                if(0==new_rel[x][z])new_rel[x][z]=L[x]+L[y]+L[z];
                else {
                    answer=max(answer,new_rel[x][z]+L[y]);
                    new_rel[x][z]=max(new_rel[x][z],L[x]+L[y]+L[z]);
                }
            }
        }
    }

        
    cout<<answer;
    
    
}