#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<map>
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
map<string,int> point[15'001];
int ind=1;
void dfs(int x,int d){
    for(auto c:point[x]){
        for(int j=0;j<d;j++)cout<<"--";
        cout<<c.first<<"\n";
        dfs(c.second,d+1);
    }
}
void solve(void) {
    int N;cin>>N;
    for(int i=0;i<N;i++){
        int M;cin>>M;
        int cur=0;
        for(int j=0;j<M;j++){
            string str;cin>>str;
            if(point[cur][str]==0){
                point[cur][str]=ind;
                cur=ind;
                ind++;
            }
            else cur=point[cur][str];
        }
    }
    dfs(0,0);
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}