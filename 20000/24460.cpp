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
int arr[2000][2000];
ll dfs(int i,int j,int l){
    if(l==1){
        return arr[i][j];
    }
    vi v;
    v.push_back(dfs(i,j,l/2));
    v.push_back(dfs(i,j+l/2,l/2));
    v.push_back(dfs(i+l/2,j,l/2));
    v.push_back(dfs(i+l/2,j+l/2,l/2));
    sort(all(v));
    return v[1];
}
void solve(void){
    // cout<<(1<<10)<<"\n";
    int N;cin>>N;
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)cin>>arr[i][j];
    cout<<dfs(0,0,N);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}