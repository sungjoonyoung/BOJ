#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<queue>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define all(v) (v).begin(), (v).end()
using namespace std;
void solve(void){
    int N,M;cin>>N>>M;
    int l=1;int r=1+M-1;
    int T;cin>>T;
    int answer=0;
    while(T--){
        int in;cin>>in;
        if(l<=in and in<=r)continue;
        if(in<l){
            answer+=l-in;
            l=in;
            r=l+M-1;
        }
        else{
            answer+=in-r;
            r=in;
            l=r-M+1;
        }
    }
    cout<<answer;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}