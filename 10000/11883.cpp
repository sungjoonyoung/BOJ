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
void solve(void) {
    int N;cin>>N;
    // 3 6 9 12
    // 수학적으로 8만 쓰고 3 와 5 분배
    string a,b;
    {
        int bullet=N/8;
        int rest=N%8;
        while(bullet){
            if(rest%3==0)break;
            rest+=8;
            bullet--;        
        }
        while(rest and rest%3==0){a+='3';rest-=3;}
        while(bullet--){a+='8';}
    }
    {
        int bullet=N/8;
        int rest=N%8;
        while(bullet){
            if(rest%5==0)break;
            rest+=8;
            bullet--;        
        }
        while(rest and rest%5==0){b+='5';rest-=5;}
        while(bullet--){b+='8';}
    }
    if(a.empty() and b.empty())cout<<"-1\n";
    else if(a.empty())cout<<b<<"\n";
    else if(b.empty())cout<<a<<"\n";
    else{
        if(a.size()<b.size())cout<<a<<"\n";
        else if(a.size()>b.size())cout<<b<<"\n";
        else cout<<min(a,b)<<"\n";
    }
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}