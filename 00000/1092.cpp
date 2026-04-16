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
void solve(void) {
    int N;cin>>N;
    vi crain;crain.resize(N);
    for(int i=0;i<N;i++)cin>>crain[i];
    int M;cin>>M;
    multiset<int> s;
    for(int i=0;i<M;i++){
        int in;cin>>in;
        s.insert(in);
    }
    sort(rall(crain));
    for(int i=0;;i++){
        int tmp=s.size();
        for(int j=0;j<crain.size();j++){
            int w=crain[j];
            auto t=s.upper_bound(w);
            if(t==s.begin())continue;
            t--;
            s.erase(t);
        }
        if(s.size()==tmp){cout<<"-1";return;}
        if(s.empty()){cout<<i+1;return;}
    }
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}