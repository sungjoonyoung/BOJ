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
    int maxnum=-1;
    int many=0;
    int in;
    for(int i=0;i<15;i++){
        cin>>in;
        if(in>maxnum){
            maxnum=in;
            many=1;            
        }
        else if(in==maxnum){
            many++;
        }
    }

    if(many==1 and in==maxnum)cout<<maxnum<<"\n";
    else cout<<maxnum+1;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}