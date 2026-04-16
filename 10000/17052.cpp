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
bool func(int ind,int x,string str){
    str[ind]=x+'0';
    ll tmp=0;
    for(int i=0;i<str.size()-1;i++){
        int c=str[i]-'0';
        if(i%2==0 and str.size()%2==0)c*=2;
        if(i%2==1 and str.size()%2==1)c*=2;
        c=c%10+c/10;
        // cout<<c<<" ";
        tmp+=c;
    }
    // cout<<tmp<<" ";
    if(str.back()-'0'==((tmp*9)%10))return 1;
    else return 0;
}
void solve(void) {
    int N;cin>>N;
    string str;cin>>str;
    int ind;
    for(int i=0;i<str.size();i++)if(str[i]=='x')ind=i;
    // cout<<func(10,3,str);
    for(int i=0;i<10;i++){
        if(func(ind,i,str)){cout<<i;return;}
    }
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}