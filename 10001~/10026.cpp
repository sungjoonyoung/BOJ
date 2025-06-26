#include<iostream>
#include<queue>
#include<utility>
using namespace std;
char map[100][100];
int visited[100][100];
queue<pair<int,int>> q;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)cin>>map[i][j];
    int A,B;
    A=B=0;
    for(int i=0;i<N;i++)for(int j=0;j<N;j++){
        if(visited[i][j]==1)continue;
        A++;
        q.push({i,j});
        visited[i][j]=1;
        while(!q.empty()){
            int curx=q.front().first;
            int cury=q.front().second;
            q.pop();
            for(int j=0;j<4;j++){
                int nx=curx+dx[j];
                int ny=cury+dy[j];
                if(nx<0 or ny<0 or nx>=N or ny>=N)continue;
                if(visited[nx][ny]==1)continue;
                if(map[curx][cury]!=map[nx][ny])continue;
                q.push({nx,ny});
                visited[nx][ny]=1;
            }
        }
    }


    for(int i=0;i<N;i++)for(int j=0;j<N;j++)if(map[i][j]=='G')map[i][j]='R';

    for(int i=0;i<N;i++)for(int j=0;j<N;j++){
        if(visited[i][j]==2)continue;
        B++;
        q.push({i,j});
        visited[i][j]=2;
        while(!q.empty()){
            int curx=q.front().first;
            int cury=q.front().second;
            q.pop();
            for(int j=0;j<4;j++){
                int nx=curx+dx[j];
                int ny=cury+dy[j];
                if(nx<0 or ny<0 or nx>=N or ny>=N)continue;
                if(visited[nx][ny]==2)continue;
                if(map[curx][cury]!=map[nx][ny])continue;
                q.push({nx,ny});
                visited[nx][ny]=2;
            }
        }
    }
    cout<<A<<" "<<B;
}