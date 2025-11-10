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
int N,M;
int visited[1000];
int arr[1000];
vector<int> v;
void dfs(int h){
    if(h==M){
        for(int i=0;i<M;i++)cout<<v[arr[i]]<<" ";
        cout<<"\n";
        return;
    }
    for(int i=0;i<N;i++){
        // if(visited[i])continue;
        visited[i]=1;
        arr[h]=i;
        dfs(h+1);
        visited[i]=0;
    }
}
void solve(void){
    cin>>N>>M;
    v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    sort(all(v));
    dfs(0);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}