#include<iostream>
#include<vector>
using namespace std;
vector<int> adj_list[10001];
int P[10001];
int visited[10001];
int _map[105][105];
int plus_map[105][105];
int minu_map[105][105];
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
    cin>>N>>Q;
    while(Q--){
        int x,y;
        cin>>x>>y;
        _map[x][y]=1;
    }

    [&](){
        int count=0;
        for(int i=1;i<N;i++){
            int x=i;
            for(int y=1;y<=i;y++,x--){
                if(_map[x][y])continue;
                if(y-1==0 or _map[x+1][y-1]==1)count++;
                plus_map[x][y]=count;
            }
        }
        for(int i=1;i<=N;i++){
            int y=i;
            for(int x=N;x>=i;x--,y++){
                if(_map[x][y])continue;
                if(x==N or _map[x+1][y-1]==1)count++;
                plus_map[x][y]=count;
            }
        }
    }();
    // for(int i=1;i<=N;i++){
    //     for(int j=1;j<=N;j++)cout<<plus_map[i][j];
    //     cout<<"\n";
    // }
    [&](){
        int count=0;
        for(int i=2;i<=N;i++){
            int y=i;
            for(int x=1;y<=N;y++,x++){
                if(_map[x][y])continue;
                if(x==1 or _map[x-1][y-1]==1)count++;
                minu_map[x][y]=count;
            }
        }
        for(int i=1;i<=N;i++){
            int x=i;
            for(int y=1;x<=N;y++,x++){
                if(_map[x][y])continue;
                if(y==1 or _map[x-1][y-1]==1)count++;
                minu_map[x][y]=count;
            }
        }
    }();
    // for(int i=1;i<=N;i++){
    //     for(int j=1;j<=N;j++)cout<<minu_map[i][j];
    //     cout<<"\n";
    // }
    
    for(int i=1;i<=N;i++)
        for(int j=1;j<=N;j++)
            if(plus_map[i][j] and minu_map[i][j])
                adj_list[plus_map[i][j]].push_back(minu_map[i][j]);

    int answer=0;
    for(int i=1;i<10001;i++){
        if(adj_list[i].empty())continue;
        // for(auto a:adj_list[i])cout<<a<<" ";
        // cout<<"\n";
        fill(visited,visited+10001,0);
        answer+=BI_DFS(i);
    }
    cout<<answer;
}