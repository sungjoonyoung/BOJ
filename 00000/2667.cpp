#include<iostream>
#include<queue>
#include<utility>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> v;
char arr[25][25];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
queue<pair<int,int>> q;
int N;
int BFS(int i, int j){
    int count=1;
    q.push({i,j});
    arr[i][j]='2';
    while(!q.empty()){
        int curx=q.front().first;
        int cury=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=curx+dx[i];
            int ny=cury+dy[i];
            if(nx<0 or ny<0 or nx>=N or ny>=N)continue;
            if(arr[nx][ny]!='1')continue;
            count++;
            q.push({nx,ny});
            arr[nx][ny]='2';
        }
    }
    return count;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)cin>>arr[i][j];
    for(int i=0;i<N;i++)for(int j=0;j<N;j++){
        if(arr[i][j]=='1')v.push_back(BFS(i,j));
    }
    sort(v.begin(),v.end());
    cout<<v.size()<<"\n";
    for(int i=0;i<v.size();i++)cout<<v[i]<<"\n";
}