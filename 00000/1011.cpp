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
    int A,B;cin>>A>>B;
    B-=A;
    ll l=1;
    while(l*(l+1)-l<=B)l++;
    l--;
    B-=l*(l+1)-l;
    int answer=0;    
    answer+=l*2-1;
    if(B>=l){
        answer++;
        B-=l;
    }
    cout<<answer+(B>0)<<'\n';
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}