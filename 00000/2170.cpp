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
    int s,e;s=e=-2'000'000'000;
    int Q;cin>>Q;
    int answer=0;
    vector<pii> v;v.resize(Q);
    for(int i=0;i<v.size();i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(all(v));
    for(int i=0;i<v.size();i++){
        int x,y;
        x=v[i].first;
        y=v[i].second;
        if(e<x){
            answer+=e-s;
            s=x;
        }
        e=max(e,y);
    }
    answer+=e-s;
    cout<<answer;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}