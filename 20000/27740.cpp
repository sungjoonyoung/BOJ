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
    vi v;v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    vi dp;dp.push_back(0);
    dp.push_back(-1);
    for(int i=0;i<N;i++){
        if(v[i])dp.push_back(i);
    }
    dp.push_back(N);
    int answer=N+1;
    for(int i=0;i<dp.size()-1;i++){
        int tmp;
        // l -> r
        tmp=(dp[i]+1)*2+(N-dp[i+1]);
        answer=min(answer,tmp);
        // r -> l
        tmp=(dp[i]+1)+(N-dp[i+1])*2;
        answer=min(answer,tmp);
    }
    cout<<answer<<"\n";
    for(int i=0;i<dp.size()-1;i++){
        int tmp;
        // l -> r
        tmp=(dp[i]+1)*2+(N-dp[i+1]);
        if(tmp==answer){
            for(int j=0;j<(dp[i]+1);j++)cout<<"L";
            for(int j=0;j<(dp[i]+1);j++)cout<<"R";
            for(int j=0;j<(N-dp[i+1]);j++)cout<<"R";
            return;
        }
        // r -> l
        tmp=(dp[i]+1)+(N-dp[i+1])*2;
        if(tmp==answer){
            for(int j=0;j<(N-dp[i+1]);j++)cout<<"R";
            for(int j=0;j<(N-dp[i+1]);j++)cout<<"L";
            for(int j=0;j<(dp[i]+1);j++)cout<<"L";
            return;
        }
    }
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}