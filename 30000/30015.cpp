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
    int N,K;cin>>N>>K;
    vi v;v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    int answer=0;
    for(int ind=20;ind>=0;ind--){
        int man=0;
        for(int i=0;i<N;i++)man+=((v[i]&(1<<ind))>0);
        if(man<K)continue;
        answer+=(1<<ind);
        for(int i=0;i<N;i++)if((v[i]&(1<<ind))==0)v[i]=0;
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