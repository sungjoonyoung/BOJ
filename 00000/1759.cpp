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
vector<string>v;
vector<char> cv;
int L,C;
int is_m(char c){
    if(c=='a')return 1;
    if(c=='e')return 1;
    if(c=='i')return 1;
    if(c=='o')return 1;
    if(c=='u')return 1;
    return 0;
}
void dfs(int l,int i,string str,int m){
    if(l==L and m>=1 and L-m>=2){
        cout<<str<<"\n";
        return;
    }
    for(int j=i+1;j<C;j++)dfs(l+1,j,str+cv[j],m+is_m(cv[j]));
}
void solve(void){
    cin>>L>>C;
    cv.resize(C);
    for(int i=0;i<C;i++)cin>>cv[i];
    sort(all(cv));
    for(int i=0;i<C;i++){
        string str="";
        dfs(1,i,str+cv[i],is_m(cv[i]));
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}