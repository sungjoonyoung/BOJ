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
void solve(void){
    int N;cin>>N;
    vector<int> v;vector<pii> sv;
    v.resize(N);sv.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    for(int i=0;i<N;i++)sv[i]={v[i],i};
    sort(all(sv));
    for(int i=0;i<N;i++)v[sv[i].second]=i;
    int op=0;
    int answer=0;
    for(int i=1;i<N;i++){
        int d=abs(v[i]-v[i-1]);
        //general
        if(d!=1){
            op=0;answer++;
        }
        else{
            //plus
            if(v[i-1]<v[i]){
                if(op==-1){op=0;answer++;}
            }
            //minus
            if(v[i-1]>v[i]){
                if(op==+1){op=0;answer++;}
            }
        }
    }
    cout<<answer;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
    
}