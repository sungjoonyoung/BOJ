#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<cmath>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define all(v) (v).begin(), (v).end()
using namespace std;
/*
C는 경우의 수로 하자.
그리고 이분탐색
*/
ll arr[10];
ll N,K,C;
bool chck(ll x){
    //시간의 상방
    ll tmpk=K;
    for(int i=0;i<N;i++){
        tmpk-=((ll)x/arr[i]);
    }
    return (tmpk<=0);
}
ll dfs(int d,int before){
    ll minnum=2'000'000'000'000;
    if(d==C){
        ll s=1;ll e=2'000'000'000'000;
        while(s+1!=e){
            ll mid=(s+e)/2;
            if(chck(mid))e=mid;
            else s=mid;
        }
        return e;
    }
    for(int i=before;i<N;i++){
        if(arr[i]==1)minnum=min(minnum,dfs(d+1,i));
        else{
            arr[i]--;
            minnum=min(minnum,dfs(d+1,i));
            arr[i]++;
        }
    }
    return minnum;
}
void solve(void){
    // cout<<log2(2'000'000'000'000)<<"\n";
    cin>>N>>K>>C;
    for(int i=0;i<N;i++)cin>>arr[i];
    cout<<dfs(0,0);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}