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
int dp[2][100'001];
void solve(void) {
    int N,M;cin>>N>>M;
    string a,b;cin>>a>>b;
    vl a1,b1;
    for(int i=0;i<a.size();i++){
        if(a[i]=='1')a1.push_back(i);
    }
    for(int j=0;j<b.size();j++){
        if(b[j]=='1')b1.push_back(j);
    }
    ll A,B;A=B=0;
    // ll answer=0;
    for(int i=0;i<a1.size();i++){
        ll l=abs(a1[i]-b1[i]);
        ll less=l/2;
        ll more=l-less;
        if(less==more){
            A+=less;
            B+=more;
        }
        else if(A<B){
            A+=more;
            B+=less;
        }
        else if(A>B){
            A+=less;
            B+=more;
        }
        else{
            A+=less;
            B+=more;
        }
    }
    cout<<A*A+B*B;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}