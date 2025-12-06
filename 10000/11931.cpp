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
int arr[2][1'000'001];
void solve(void){
    int N;cin>>N;
    for(int i=0;i<N;i++){
        int in;cin>>in;
        arr[(int)(in>0)][abs(in)]++;
    }
    for(int j=1'000'000;j>=0;j--){
        int tmp=arr[1][j];
        while(tmp--){
            cout<<j<<"\n";
        }
    }
    for(int j=0;j<=1'000'000;j++){
        int tmp=arr[0][j];
        while(tmp--){
            cout<<j*(-1)<<"\n";
        }
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}