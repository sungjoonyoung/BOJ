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
ll arr[501][501];
void solve(void) {
    ll N;cin>>N;
    ll A,B,K;cin>>A>>B>>K;
    for(int i=0;i<=N;i++)for(int j=0;j<=A+B;j++)arr[i][j] = -2'000'000'000'000'000'000LL;
    arr[0][A] = 0;
    for(int i=1;i<=N;i++){
        for(int a=0;a<=A+B;a++){
            for(int x=K;x<=500;x++){
                int b=A+B-a;
                //1
                if(x<=b)arr[i][a+x]=max(arr[i][a+x],arr[i-1][a]+(a+x)*(b-x));
                //2
                if(x<=a)arr[i][a-x]=max(arr[i][a-x],arr[i-1][a]+(a-x)*(b+x));
            }
        }
    }
    ll answer=0;
    for(int i=0;i<=A+B;i++)answer=max(arr[N][i],answer);
    cout<<answer;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}