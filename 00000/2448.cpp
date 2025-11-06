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
int arr[3*(1<<10)+1][3*(1<<10)*2+2];
void dfs(int h,int l,int x){
    if(x==3){
        for(int i=0;i<5;i++)arr[h][l+i]=1;
        for(int i=0;i<x;i++)arr[h-i][l+i]=1;
        for(int i=0;i<x;i++)arr[h-2+i][l+2+i]=1;
        // for(int i=0;i<=x;i++)arr[h-i][l+i]=1;
        return;
    }
    //up
    dfs(h-x/2,l+x/2,x/2);
    //left
    dfs(h,l,x/2);
    //right
    dfs(h,l+x,x/2);
}
void solve(void){
    int N;cin>>N;
    dfs(N,1,N); 
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N*2-1;j++){
            if(arr[i][j])cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}