#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<queue>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define all(v) (v).begin(), (v).end()
using namespace std;
int visited[101];
int warp[101];
queue<pii> q;
void solve(void){
    int N,M;cin>>N>>M;
    while(N--){
        int x,y;cin>>x>>y;
        warp[x]=y;
    }
    while(M--){
        int x,y;cin>>x>>y;
        warp[x]=y;
    }
    q.push({1,0});
    while(!q.empty()){
        int x=q.front().first;
        int s=q.front().second;
        q.pop();
        if(x==100){
            cout<<s;return;
        }
        //
        for(int i=1;i<=6;i++){
            int nx=x+i;
            if(nx>100)break;
            if(visited[nx])continue;
            //warp
            if(warp[nx]){
                q.push({warp[nx],s+1});
                visited[warp[nx]]=1;
            }
            //not
            else{
                q.push({nx,s+1});
                visited[nx]=1;
            }
        }
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}