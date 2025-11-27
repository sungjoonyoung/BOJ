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

void solve(void){
    int N,K;cin>>N>>K;
    //K=m*n , m+n==N+1
    for(int i=1;i<=sqrt(K);i++){
        if(K%i)continue;
        int j=K/i;
        if(j+i==N+1){cout<<"YES\n";return;}
    }
    cout<<"NO\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}