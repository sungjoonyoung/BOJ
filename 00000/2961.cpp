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
ll arr[2][10];
ll dfs(int i,int N,ll l, ll r){
    if(i==N){
        if(l==1 and r==0)return 1'000'000'000'001;
        return abs(l-r);
    }
    ll one=dfs(i+1,N,l*arr[0][i],r+arr[1][i]);
    ll none=dfs(i+1,N,l,r);
    return min(one,none);
}
void solve(void){
    // cout<<(1<<10)<<"\n";
    int N;cin>>N;
    for(int i=0;i<N;i++){
        for(int j=0;j<2;j++){
            cin>>arr[j][i];
        }
    }
    cout<<dfs(0,N,1,0);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}