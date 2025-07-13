#include<iostream>
#include<vector>
using namespace std;
vector<int> adj_list[100001];
int P[100001];
int visited[100001];
char _map[101][101];
int row_map[101][101];
int col_map[101][101];
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
    int N;
    cin>>N;
    for(int i=1;i<=N;i++)for(int j=1;j<=N;j++)cin>>_map[i][j];
    int count=0;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if(_map[i][j]=='.'){
                if(_map[i][j-1]=='X' or _map[i][j-1]==0)count++;
                row_map[i][j]=count;
            }
        }
    }
    // for(int i=1;i<=N;i++){
    //     for(int j=1;j<=N;j++)cout<<row_map[i][j];
    //     cout<<"\n";
    // }
    count=0;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if(_map[j][i]=='.'){
                if(_map[j-1][i]=='X' or _map[j-1][i]==0)count++;
                col_map[j][i]=count;
            }
        }
    }
    // for(int i=1;i<=N;i++){
    //     for(int j=1;j<=N;j++)cout<<col_map[i][j];
    //     cout<<"\n";
    // }
    for(int i=1;i<=N;i++)
        for(int j=1;j<=N;j++)
            if(row_map[i][j] and col_map[i][j])
                adj_list[row_map[i][j]].push_back(col_map[i][j]);

                
    int answer=0;
    for(int i=1;i<=100000;i++){
        if(adj_list[i].empty())continue;
        // for(auto a:adj_list[i])cout<<a<<" ";
        // cout<<"\n";
        fill(visited,visited+100001,0);
        answer+=BI_DFS(i);
    }
    cout<<answer;
}