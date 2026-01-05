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
pii vst[1'000'001];
int answer[100'000];
void solve(void) {
    int N;cin>>N;
    vi v;v.resize(N);
    for(int i=0;i<N;i++){
        cin>>v[i];
        vst[v[i]]={1,i};
    }
    for(int i=0;i<N;i++){
        for(int j=1;j<=sqrt(v[i]);j++){
            if(v[i]/j*j!=v[i] or j==v[i])continue;
            if(vst[j].first==1){//지면
                answer[vst[j].second]++;
                answer[i]--;
            }
            if(vst[v[i]/j].first==1 and j!=v[i]/j){//지면
                answer[vst[v[i]/j].second]++;
                answer[i]--;
            }
        }
    }
    for(int i=0;i<N;i++)cout<<answer[i]<<" ";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}