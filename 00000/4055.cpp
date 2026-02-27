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
int N=100;
int sq=0;
void solve(void) {
    cin>>N;if(!N)return;
    vector<pii> v;v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i].first>>v[i].second;
    for(int i=0;i<N;i++){
        v[i].first*=60;
        v[i].second*=60;
    }
    sort(all(v));
    for(int i=0;i<v.size()/2;i++)swap(v[i],v[v.size()-1-i]);
    int curt=8*60;
    int answer=0;
    minpq(int)pq;
    for(;curt<24*60;curt+=30){
        while(!v.empty() and v.back().first<=curt){
            pq.push(v.back().second);
            v.pop_back();
        }
        while(!pq.empty() and curt+30>pq.top())pq.pop();
        if(pq.empty())continue;
        answer++;
        pq.pop();
    }
    sq++;
    cout<<"On day "<<sq<<" Emma can attend as many as "<<answer<<" parties.\n";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(N)solve();
}