#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<queue>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define all(v) (v).begin(), (v).end()
using namespace std;
void solve(void){
    int N;cin>>N;
    int s,ss;cin>>s>>ss;
    s+=ss;
    int tmp=0;
    while(s--){
        int in;cin>>in;
        if(in){
            if(tmp==N)N*=2;
            tmp++;
        }
        else tmp--;
    }
    cout<<N;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}