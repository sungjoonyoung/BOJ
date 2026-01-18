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
int N;vi v;
void solve(void) {
    cin>>N;v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    v.push_back(100);
    int W;cin>>W;
    string str0;
    string str1;
    int minnum=0;int minind=N;
    for(int i=1;i<N;i++){
        if(minnum<=W/v[i] and v[minind]>=v[i]){
            minnum=W/v[i];
            minind=i;
        }
    }
    
    //0일 때는 따로 생가갷 놓자
    if(minnum==0){cout<<"0";return;}
    int W0,W1;W0=W1=W;
    //일단 싹 깔아놓자
    
    str0+=(char)(minind+'0');
    W0-=v[minind];
    for(int i=0;i<W0/v[0];i++){
        str0+=(char)('0');
    }
    W0-=W0/v[0]*v[0];
    
    for(int i=0;i<W1/v[minind];i++){
        str1+=(char)(minind+'0');
    }
    W1-=W1/v[minind]*v[minind];
    for(int i=0;i<str0.size();i++){
        int curn=str0[i]-'0';
        minind=curn;
        for(int j=curn+1;j<N;j++){
            if(-v[curn]+v[j]<=W0){
                minind=j;
            }
        }
        W0=W0+v[curn]-v[minind];
        str0[i]=(char)(minind+'0');
    }

    for(int i=0;i<str1.size();i++){
        int curn=str1[i]-'0';
        minind=curn;
        for(int j=curn+1;j<N;j++){
            if(-v[curn]+v[j]<=W1){
                minind=j;
            }
        }
        W1=W1+v[curn]-v[minind];
        str1[i]=(char)(minind+'0');
    }
    if(str0.size()>str1.size())cout<<str0;
    else if(str0.size()==str1.size() and str0>str1)cout<<str0;
    else cout<<str1;
    // cout<<str1;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}