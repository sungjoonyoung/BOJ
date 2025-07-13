#include<iostream>
#include<vector>
using namespace std;
vector<int> adj_list[301];
int P[301];
int visited[301];
int _map[301][301];
int BI_DFS(int x){
    for(auto a:adj_list[x]){
        if(visited[a])continue;
        visited[a]=1;
        if(P[a]==0 or BI_DFS(P[a])){
            P[a]=x;
            return 1;
        }
    }
    return 0;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M,Q;
    cin>>N>>M>>Q;
    while(Q--){
        int x,y;
        cin>>x>>y;
        _map[x][y]=1;
    }

    for(int i=1;i<=N;i++)
        for(int j=1;j<=M;j++)
            if(_map[i][j]==0)
                adj_list[i].push_back(j);

                
    int answer=0;
    for(int i=1;i<301;i++){
        if(adj_list[i].empty())continue;
        // for(auto a:adj_list[i])cout<<a<<" ";
        // cout<<"\n";
        fill(visited,visited+301,0);
        answer+=BI_DFS(i);
    }
    cout<<answer;
}