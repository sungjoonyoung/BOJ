#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<queue>
#include<cmath>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define all(v) (v).begin(), (v).end()
using namespace std;
queue<pii> q;
int vst[2][300'001];
void solve(void){
    int N,K;cin>>N>>K;
    if(N==K){cout<<"0\n1";return;}
    for(int i=0;i<300'001;i++)vst[0][i]=2'000'000'000;
    vst[0][N]=0;
    vst[1][N]=1;
    
    q.push({N,0});
    while(!q.empty()){
        int curx=q.front().first;
        int curw=q.front().second;
        q.pop();
        // 굳이 안 해도 되지만
        if(curw>=vst[0][K])break;
        //
        int tmpx=0;
        //
        tmpx=curx*2;
        if(curx<K and vst[0][tmpx]>=curw+1){
            vst[0][tmpx]=curw+1;
            if(vst[1][tmpx]==0)q.push({tmpx,curw+1});
            vst[1][tmpx]+=vst[1][curx];
        }
        //
        tmpx=curx+1;
        if(curx<K and tmpx>=0 and vst[0][tmpx]>=curw+1){
            vst[0][tmpx]=curw+1;
            if(vst[1][tmpx]==0)q.push({tmpx,curw+1});
            vst[1][tmpx]+=vst[1][curx];
        }
        //
        tmpx=curx-1;
        if(tmpx>=0 and vst[0][tmpx]>=curw+1){
            vst[0][tmpx]=curw+1;
            if(vst[1][tmpx]==0)q.push({tmpx,curw+1});
            vst[1][tmpx]+=vst[1][curx];
        }
    }
    cout<<vst[0][K]<<"\n"<<vst[1][K];
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}