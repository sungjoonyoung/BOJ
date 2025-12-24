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
vi v;int ind=1;
int val[100'001];
pii poi[100'001];
void dfs(int i,int num){
    int nw=val[i];
    if(num<nw){ //left
        if(poi[i].first==0){
            val[ind]=num;
            poi[i].first=ind;
            ind++;
            return;
        }
        else dfs(poi[i].first,num);
    }
    else{
        if(poi[i].second==0){
            val[ind]=num;
            poi[i].second=ind;
            ind++;
            return;
        }
        else dfs(poi[i].second,num);
    }
}
void dfs2(int i){
    if(poi[i].first)dfs2(poi[i].first);
    if(poi[i].second)dfs2(poi[i].second);
    cout<<val[i]<<"\n";
}
void solve(void){
    while(1){
        int in;cin>>in;
        if(cin.eof())break;
        v.push_back(in);
    }
    val[0]=v[0];
    for(int i=1;i<v.size();i++){
        dfs(0,v[i]);
    }
    dfs2(0);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}