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
ll arr[100'000];
void solve(void){
    int N,K;cin>>N>>K;
    for(int i=0;i<N;i++)arr[i]=K-i;
    ll maxnum=-2'000'000'000'000'000;
    for(int l=1;l<=N;l++){
        int tmp=N-l;
        maxnum=max(maxnum,(arr[(l/2)]+tmp)*l);
    }
    cout<<maxnum;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}