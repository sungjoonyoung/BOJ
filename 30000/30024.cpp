#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
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
int _map[1000][1000];
using pipii=pair<int,pii>;
maxpq(pipii)pq;
int vst[1000][1000];
void solve(void) {
    int N,M;cin>>N>>M;
    for(int i=0;i<N;i++)for(int j=0;j<M;j++){
        cin>>_map[i][j];
        if(i==0 or i==N-1 or j==0 or j==M-1){
            if(vst[i][j])continue;
            pq.push({_map[i][j],{i,j}});
            vst[i][j]=1;
        }
    }
    int K;cin>>K;
    while(!pq.empty()){
        if(K==0)break;
        int curw=pq.top().first;
        int curx=pq.top().second.first;
        int cury=pq.top().second.second;
        pq.pop();
        K--;
        cout<<curx+1<<" "<<cury+1<<"\n";
        for(int i=0;i<4;i++){
            int nx=curx+"1102"[i]-'1';
            int ny=cury+"0211"[i]-'1';
            if(nx<0 or ny<0 or nx>=N or ny>=M)continue;
            if(vst[nx][ny])continue;
            pq.push({_map[nx][ny],{nx,ny}});
            vst[nx][ny]=1;
        }
    }
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}