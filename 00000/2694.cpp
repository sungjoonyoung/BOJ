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
vi v;
int dfs(int target){
    int tmp=0;
    for(int i=0;i<v.size();i++){
        tmp+=v[i];
        if(tmp>target)return 0;
        if(tmp==target)tmp=0;
    }
    if(tmp)return 0; // 끝이 부족할 때
    return 1;
}
void solve(void) {
    int N;cin>>N;
    v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    int target=0;
    for(int i=0;i<N;i++)target+=v[i];
    int sq=sqrt(target);
    for(int i=1;i<=sq;i++){
        if(target/i*i!=target)continue;
        if(dfs(i)){cout<<i<<"\n";return;}
    }
    for(int i=sq;i>=1;i--){
        if(target/i*i!=target)continue;
        if(dfs(target/i)){cout<<target/i<<"\n";return;}
    }
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}