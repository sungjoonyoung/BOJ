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
int Aind[100'001];
int Bind[100'001];
vi A,B;
void dfs(int s,int e,int As,int Ae){
    if(s>e or As>Ae)return;
    int root=B[e];
    cout<<root<<" ";
    int Arootind=Aind[root];

    int leftmany=Arootind-As;
    int rightmany=Ae-Arootind;
    dfs(s,s+leftmany-1,Arootind-leftmany,Arootind-1);
    dfs(s+leftmany,e-1,Arootind+1,Arootind+rightmany);
}
void solve(void) {
    /*
    어떤 루트에 대해서 왼쪽에 있는 건 왼쪽 자신 오른쪽에 있는 건 오른쪽 자식
        (왼쪽 자식)루트(오른쪽 자식)
    어떤 루트에 대해서 왼쪽에 있는 건 모두 자식
        (왼쪽 자식)(오른쪽 자식)루트
    */
    int N;cin>>N;
    A.resize(N);B.resize(N);
    for(int i=0;i<N;i++)cin>>A[i];
    for(int i=0;i<N;i++)cin>>B[i];
    for(int i=0;i<N;i++)Aind[A[i]]=i;
    for(int i=0;i<N;i++)Bind[B[i]]=i;
    dfs(0,N-1,0,N-1);
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}