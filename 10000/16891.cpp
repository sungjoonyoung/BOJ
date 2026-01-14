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
    int N;cin>>N;N*=N;
    double v1=0;
    double v2=-1;
    int answer=0;
    while(1){
        // cout<<v1<<" "<<v2<<"\n";
        if(v1>=0 and v2>=0 and v1<=v2)break;
        if(v1<0){
            v1=abs(v1);answer++;
            continue;
        }
        double u1=v1;
        double u2=v2;
        v1=u1*(1-N)/(1+N)+u2*(2*N)/(1+N);
        v2=u1*(2*1)/(1+N)-u2*(1-N)/(1+N);
        answer++;
    }
    cout<<answer;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}