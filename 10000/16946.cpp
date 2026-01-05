#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<set>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define minpq(type) priority_queue<type, vector<type>, greater<type>>
#define maxpq(type) priority_queue<type>
using namespace std;
char _map[1000][1000];
pii sum[1000][1000];
int vst[1000][1000];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
void solve(void) {
    int N,M;cin>>N>>M;
    int ind=1;
    for(int i=0;i<N;i++)for(int j=0;j<M;j++)cin>>_map[i][j];
    for(int i=0;i<N;i++)for(int j=0;j<M;j++){
        if(_map[i][j]=='1' or sum[i][j].first)continue;
        queue<pii>q;
        //스캔
        q.push({i,j});
        vst[i][j]=1;
        int answer=1;
        while(!q.empty()){
            int curx=q.front().first;
            int cury=q.front().second;
            q.pop();
            for(int k=0;k<4;k++){
                int nx=curx+dx[k];
                int ny=cury+dy[k];
                if(nx<0 or ny<0 or nx>=N or ny>=M)continue;
                if(_map[nx][ny]!='0')continue;
                if(vst[nx][ny])continue;
                q.push({nx,ny});
                vst[nx][ny]=1;
                answer++;
            }
        }
        //채우기
        q.push({i,j});
        sum[i][j]={answer,ind};
        while(!q.empty()){
            int curx=q.front().first;
            int cury=q.front().second;
            q.pop();
            for(int k=0;k<4;k++){
                int nx=curx+dx[k];
                int ny=cury+dy[k];
                if(nx<0 or ny<0 or nx>=N or ny>=M)continue;
                if(_map[nx][ny]!='0')continue;
                if(sum[nx][ny].first)continue;
                q.push({nx,ny});
                sum[nx][ny]={answer,ind};
            }
        }
        ind++;
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(_map[i][j]=='0'){cout<<"0";continue;}
            int answer=0;
            set<int>s;
            for(int k=0;k<4;k++){
                int nx=i+dx[k];
                int ny=j+dy[k];
                if(nx<0 or ny<0 or nx>=N or ny>=M)continue;
                if(s.find(sum[nx][ny].second)!=s.end())continue;
                answer+=sum[nx][ny].first;
                s.insert(sum[nx][ny].second);
            }
            cout<<(answer+1)%10;
        }
        cout<<"\n";
    }
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}