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
void solve(void) {
    int N;cin>>N;
    vl v;v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    ll answer=N-1;
    for(int i=0;i<N;i++)for(int j=i;j<N;j++){
        ll dx=j-i;
        ll dy=v[j]-v[i];
        ll m=0;
        if(dx==0)m=0;
        else if(dy%abs(dx)==0)m=dy/dx;
        ll n=v[i]-m*i;
        ll tmp=0;
        for(int k=0;k<N;k++){
            tmp+=!(v[k]==m*k+n);
        }
        answer=min(answer,tmp);
    }
    cout<<answer;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}