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
vi v;
int prefix[1000];
int suffix[1000];
void solve(void){
    int N;cin>>N;
    v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    for(int i=0;i<N;i++){
        int maxnum=0;
        for(int j=0;j<i;j++)if(v[i]>v[j])maxnum=max(maxnum,prefix[j]);
        prefix[i]=maxnum+1;
    }
    // for(int i=0;i<N;i++)cout<<prefix[i]<<" ";
    for(int i=N-1;i>=0;i--){
        int maxnum=0;
        for(int j=N-1;j>i;j--)if(v[i]>v[j])maxnum=max(maxnum,suffix[j]);
        suffix[i]=maxnum+1;
    }
    int maxnum=-1;
    for(int i=0;i<N;i++)maxnum=max(maxnum,prefix[i]+suffix[i]);
    cout<<maxnum-1;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}