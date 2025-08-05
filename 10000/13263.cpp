#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#define ll long long
using namespace std;
ll a[100'001];
ll b[100'001];
ll dp[100'001];
vector<pair<double,int>> s;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    for(int i=0;i<N;i++)cin>>a[i];
    for(int i=0;i<N;i++)cin>>b[i];
    s.push_back({0,0});
    //dp[0]=b[0];
    // b[j]*a[i]+dp[j]
    for(int i=1;i<N;i++){
        int curx=a[i];
        int point=upper_bound(s.begin(),s.end(),make_pair((double)curx,0))-s.begin()-1;
        
        dp[i]=dp[s[point].second]+a[i]*b[s[point].second];
        
        double x=-((double)dp[s.back().second]-dp[i])/(b[s.back().second]-b[i]);
        while(x<s.back().first){
            s.pop_back();
            x=-((double)dp[s.back().second]-dp[i])/(b[s.back().second]-b[i]);
        }
        
        s.push_back({x,i});
    }
    // for(int i=0;i<N;i++)cout<< dp[i]<<" ";
    cout<<dp[N-1];
}