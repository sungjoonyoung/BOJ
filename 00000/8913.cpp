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
int dfs(string str){
    if(str.empty())return 1;
    int op=0;
    for(int i=0;i<str.size();i++){
        if(i==0 or str[i-1]!=str[i]){
            if(i==str.size()-1 or str[i]!=str[i+1])continue;
            int r=i+1;
            while(r<str.size() and str[r]==str[r-1])r++;
            string nxt=str;
            nxt.erase(nxt.begin()+i,nxt.begin()+r);
            if(dfs(nxt))return 1;
        }
    }
    return op;
}
void solve(void) {
    string str;cin>>str;
    cout<<dfs(str)<<"\n";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}