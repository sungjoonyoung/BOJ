#include<iostream>
#include<vector>
using namespace std;
vector<int> adj_list[501];
int P[501];
int visited[501];
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
    int N,Q;
    cin>>N>>Q;
    while(Q--){
        int a,b;cin>>a>>b;
        adj_list[a].push_back(b);
    }

    int answer=0;
    for(int i=1;i<=N;i++){
        if(adj_list[i].empty())continue;
        fill(visited,visited+N+1,0);
        answer+=BI_DFS(i);
    }
    cout<<answer;
}