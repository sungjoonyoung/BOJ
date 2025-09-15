#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#define ll long long
using namespace std;
ll A,B,C;
ll sum[1'000'001];
ll dp[1'000'001];
vector<pair<double,int>> v;
ll a(int i){
    ll tmp=-2LL*A*sum[i];
    return tmp;
}
ll b(int i){
    ll tmp=A*sum[i]*sum[i]-B*sum[i]+dp[i];
    return tmp;
}
bool bigger(int i){
    double l=v.back().first;
    double r=-((double)b(i)-b(v.back().second))/(a(i)-a(v.back().second));
    return r<l;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N>>A>>B>>C;
    for(int i=1;i<=N;i++){
        cin>>sum[i];
        sum[i]+=sum[i-1];
    }
    v.push_back({0,0});
    for(int i=1;i<=N;i++){
        int y=upper_bound(v.begin(),v.end(),make_pair((double)sum[i],0))-v.begin()-1;
        dp[i]=a(v[y].second)*sum[i]+b(v[y].second);
        dp[i]+=A*sum[i]*sum[i]+B*sum[i]+C;
        while(bigger(i)){
            v.pop_back();
        }
        double x=-((double)b(i)-b(v.back().second))/(a(i)-a(v.back().second));
        v.push_back({x,i});
    }
    cout<<dp[N];
}