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
int N,C;vi v;
int func(int l){
    int cur=-1'000'000'010;
    int tmpC=C;
    for(int i=0;i<N;i++){
        if(cur+l<=v[i]){cur=v[i];tmpC--;}
    }
    return(tmpC<=0);
}
void solve(void) {
    cin>>N>>C;
    v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    sort(all(v));
    int s=0;int e=1'000'000'005;
    while(s+1!=e){
        int mid=(s+e)/2;
        if(func(mid))s=mid;
        else e=mid;
    }
    cout<<s;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}