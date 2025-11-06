#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<queue>
#include<map>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define all(v) (v).begin(), (v).end()
using namespace std;
map<int,int> m;
int A[1001];
int B[1001];
void solve(void){
    int T;cin>>T;
    int N;cin>>N;
    for(int i=1;i<=N;i++){
        cin>>A[i];A[i]+=A[i-1];
    }
    int M;cin>>M;
    for(int i=1;i<=M;i++){
        cin>>B[i];B[i]+=B[i-1];
    }
    for(int i=1;i<=N;i++){
        for(int j=i;j<=N;j++)m[A[j]-A[i-1]]++;
    }
    ll answer=0;
    for(int i=1;i<=M;i++){
        for(int j=i;j<=M;j++){
            int tmp=B[j]-B[i-1];
            if(m.find(T-tmp)==m.end())continue;
            answer+=m[T-tmp];
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