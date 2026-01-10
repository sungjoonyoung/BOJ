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
int xmap[30'001];
int ymap[30'001];
int xman[100'001];
int yman[100'001];
int xmax=0;
int ymax=0;
void solve(void) {
    int N,Q;cin>>N>>Q;
    xman[0]=yman[0]=N;
    while(Q--){
        int op,in;cin>>op>>in;in--;
        if(op==1){
            xman[xmap[in]]--;
            xman[++xmap[in]]++;
            xmax=max(xmax,xmap[in]);
        }
        else{
            yman[ymap[in]]--;
            yman[++ymap[in]]++;
            ymax=max(ymax,ymap[in]);
        }
        cout<<xman[xmax]*yman[ymax]<<"\n";
    }
    
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}