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
int item[100];
// vector<pii> adj[100]; // {to value} [from]
int floyd[100][100];
void solve(void) {
    int N,R,M;cin>>N>>R>>M;
    for(int i=0;i<N;i++)cin>>item[i];
    for(int i=0;i<N;i++)for(int j=0;j<N;j++){
        if(i==j)floyd[i][j]=0;
        else floyd[i][j]=1'000'000'000;
    }
    for(int i=0;i<M;i++){
        int a,b,v;cin>>a>>b>>v;
        a--;b--;
        floyd[a][b]=floyd[b][a]=v;
    }
    for(int k=0;k<N;k++)
        for(int i=0;i<N;i++)for(int j=0;j<N;j++){
            floyd[i][j]=min(floyd[i][k]+floyd[k][j],floyd[i][j]);
        }
    int answer=0;
    for(int i=0;i<N;i++){
        int tmp=0;
        for(int j=0;j<N;j++)if(floyd[i][j]<=R)tmp+=item[j];
        answer=max(tmp,answer);
        // cout<<tmp<<"\n";
    }
    cout<<answer;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)solve();
}