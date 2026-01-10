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
pll dfs(string str){
    if(str.size()==1){
        ll odd=(str.back()-'0')%2;
        return {odd,odd};
    }
    if(str.size()==2){
        ll maxnum=0;ll minnum=0;
        string tmp;
        ll table=str[0]+str[1]-'0'-'0';
        pll answer=dfs(to_string(table));
        maxnum+=answer.first;
        minnum+=answer.second;
        for(int i=0;i<str.size();i++){
            if((str[i]-'0')%2){
                maxnum++;
                minnum++;
            }
        }
        return {maxnum,minnum};
    }
    ll realmax=0;
    ll realmin=2'000'000'000'000'000'000;
    for(int i=0;i<str.size();i++){
        for(int j=i+1;j<str.size()-1;j++){
            ll table=0;
            string tmp;
            //first
            tmp.clear();
            for(int k=0;k<=i;k++)tmp+=str[k];
            table+=stol(tmp);
            //sec
            tmp.clear();
            for(int k=i+1;k<=j;k++)tmp+=str[k];
            table+=stol(tmp);
            //third
            tmp.clear();
            for(int k=j+1;k<=str.size();k++)tmp+=str[k];
            table+=stol(tmp);
            //ab
            // cout<<str<<" "<<table<<"\n";
            pll answer=dfs(to_string(table));
            realmax=max(realmax,answer.first);
            realmin=min(realmin,answer.second);
        }
    }
    for(int i=0;i<str.size();i++){
        if((str[i]-'0')%2){
            realmax++;
            realmin++;
        }
    }
    return {realmax,realmin};    
}
void solve(void) {
    string str;cin>>str;
    pll answer=dfs(str);
    cout<<answer.second<<" "<<answer.first;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}