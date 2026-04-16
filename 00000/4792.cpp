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
int N,M,K;
int P[1'001];
vector<pii> B,R;
int find(int x){
    if(x==P[x])return x;
    return P[x]=find(P[x]);
}
void uni(int x,int y){
    P[find(x)]=P[find(y)];
}
void init(void);
void solve(void) {
    init();
    int l,u;l=u=-1;
    // R을 다 해 놓고 B 끼워 맞추기
    {   
        int red,blue;red=blue=0;
        for(int i=1;i<=N;i++)P[i]=i;
        for(int i=0;i<R.size();i++){
            int x=R[i].first;int y=R[i].second;
            if(find(x)==find(y))continue;
            red++;
            uni(x,y);
        }
        for(int i=0;i<B.size();i++){
            int x=B[i].first;int y=B[i].second;
            if(find(x)==find(y))continue;
            blue++;
            uni(x,y);
        }
        if(red+blue==N-1)l=blue;
    }
    // B를 다 해 놓고 R 끼워 맞추기
    {   
        int red,blue;red=blue=0;
        for(int i=1;i<=N;i++)P[i]=i;
        for(int i=0;i<B.size();i++){
            int x=B[i].first;int y=B[i].second;
            if(find(x)==find(y))continue;
            blue++;
            uni(x,y);
        }
        for(int i=0;i<R.size();i++){
            int x=R[i].first;int y=R[i].second;
            if(find(x)==find(y))continue;
            red++;
            uni(x,y);
        }
        if(red+blue==N-1)u=blue;
    }
    if(l==-1 or u==-1){cout<<"0\n";return;}
    cout<<(l<=K and K<=u)<<"\n";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        cin>>N>>M>>K;
        if(N==0 and M==0 and K==0)break;
        solve();
    }
}
void init(void){
    R.clear();B.clear();
    for(int i=0;i<M;i++){
        char c;int x,y;
        cin>>c>>x>>y;
        if(c=='R')R.push_back({x,y});
        else B.push_back({x,y});
    }
}