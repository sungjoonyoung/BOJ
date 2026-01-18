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
set<int> s;
void solve(void) {
    int N,M;cin>>N>>M;
    vi A,B;A.resize(N);B.resize(M);
    for(int i=0;i<N;i++)cin>>A[i];
    for(int i=0;i<M;i++)cin>>B[i];
    for(int i=1;i<=sqrt(B[0]);i++){
        if(B[0]/i*i!=B[0])continue;
        if(i!=B[0]/i)s.insert(i);
        s.insert(B[0]/i);
    }
    for(int i=1;i<M;i++){
        vi gar;
        for(auto c:s){
            if(B[i]/c*c!=B[i])gar.push_back(c);
        }
        for(auto c:gar)s.erase(c);
    }
    for(int i=0;i<N;i++){
        vi gar;
        for(auto c:s){
            if(c/A[i]*A[i]!=c)gar.push_back(c);
        }
        for(auto c:gar)s.erase(c);
    }
    cout<<s.size();
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}