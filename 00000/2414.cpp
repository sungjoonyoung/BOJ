#include<iostream>
#include<vector>
using namespace std;
vector<int> adj_list[501];
int P[501];
int visited[501];
char _map[51][51];
int row_map[51][51];
int col_map[51][51];
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
    int N,M;
    cin>>N>>M;
    for(int i=1;i<=N;i++)for(int j=1;j<=M;j++)cin>>_map[i][j];
    int count=0;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            if(_map[i][j]=='*'){
                if(_map[i][j-1]=='.' or _map[i][j-1]==0)count++;
                row_map[i][j]=count;
            }
        }
    }
    // for(int i=1;i<=N;i++){
    //     for(int j=1;j<=M;j++)cout<<row_map[i][j];
    //     cout<<"\n";
    // }
    count=0;
    for(int i=1;i<=M;i++){
        for(int j=1;j<=N;j++){
            if(_map[j][i]=='*'){
                if(_map[j-1][i]=='.' or _map[j-1][i]==0)count++;
                col_map[j][i]=count;
            }
        }
    }
    // for(int i=1;i<=N;i++){
    //     for(int j=1;j<=M;j++)cout<<col_map[i][j];
    //     cout<<"\n";
    // }
    for(int i=1;i<=N;i++)
        for(int j=1;j<=M;j++)
            if(row_map[i][j] and col_map[i][j])
                adj_list[row_map[i][j]].push_back(col_map[i][j]);
    int answer=0;
    for(int i=1;i<=500;i++){
        if(adj_list[i].empty())continue;
        // for(auto a:adj_list[i])cout<<a<<" ";
        // cout<<"\n";
        fill(visited,visited+501,0);
        answer+=BI_DFS(i);
    }
    cout<<answer;
}