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
    vector<pii> A;A.resize(N);
    for(int i=0;i<N;i++){
        int in;cin>>in;
        A[i]={in,i};
    }
    int M;cin>>M;
    vector<pii> B;B.resize(M);
    for(int i=0;i<M;i++){
        int in;cin>>in;
        B[i]={in,i};
    }
    sort(all(A),[&](pii a,pii b){
        if(a.first!=b.first)return a.first>b.first;
        else return a.second<b.second;
    });
    sort(all(B),[&](pii a,pii b){
        if(a.first!=b.first)return a.first>b.first;
        else return a.second<b.second;
    });
    vector<pii> v;v.clear();
    v.push_back({101,-1});
    int indb=-1;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(A[i].first==B[j].first and A[i].second>v.back().second and B[j].second>indb){
                v.push_back(A[i]);
                indb=B[j].second;
            }
        }
    }
    cout<<v.size()-1<<"\n";
    for(int i=1;i<v.size();i++)cout<<v[i].first<<" ";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}