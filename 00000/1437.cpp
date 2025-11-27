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
ll MOD=10'000+7;
ll pow_f(ll a, ll e){
    ll tmp=a;
    ll answer=1;
    while(e){
        if(e%2)answer*=tmp;
        tmp*=tmp;
        e/=2;
        answer%=MOD;
        tmp%=MOD;
    }
    return answer;
}
void solve(void){
    ll a;cin>>a;
    if(a==0){cout<<"0";return;}
    
    for(int i=0;i*2<=a;i++){
        if((a-i*2)%3)continue;
        int j=(a-i*2)/3;

        ll tmp=pow_f(2,i)%MOD;
        tmp*=pow_f(3,j)%MOD;
        tmp%=MOD;
        cout<<tmp;
        return;
    }
    cout<<a;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}