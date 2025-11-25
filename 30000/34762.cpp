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
int arr[200'001];
void solve(void){
    int N,K;cin>>N>>K;
    int M;cin>>M;
    for(int i=0;i<M;i++)cin>>arr[i];
    arr[M]=N+1;
    for(int i=0;i<M;i++){
        if(arr[i]+1==arr[i+1])continue;
        if(arr[i]+K+1>=arr[i+1]){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}