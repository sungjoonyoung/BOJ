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
priority_queue<pii,vector<pii>,greater<pii>> pq; //due time
priority_queue<pair<int,pii>,vector<pair<int,pii>>,greater<pair<int,pii>>> milin;//procastinated
void solve(void){
    int N;cin>>N;
    while(N--){
        int t,d;cin>>t>>d;
        pq.push({d,t});
    }
    int M;cin>>M;
    while(M--){
        int s,t,d;
        cin>>s>>t>>d;
        milin.push({s,{d,t}});
    }
    int curt=0;
    while(1){
        int work_d;
        int work_t;
        int milin_s;
        int milin_d;
        int milin_t;
        if(!pq.empty()){
            work_d=pq.top().first;
            work_t=pq.top().second;
        }
        if(!milin.empty()){
            milin_s=milin.top().first;
            milin_d=milin.top().second.first;
            milin_t=milin.top().second.second;
        }

        if(pq.empty() and milin.empty()) break;
        else if(pq.empty()){
            milin.pop();
            pq.push({milin_d,milin_t});
            curt=milin_s;
        }
        else if(milin.empty()){
            if(curt+work_t>work_d){cout<<"NO";return;}
            pq.pop();
            curt+=work_t;
        }
        //밀린일이 들어 왔을 때
        else if(curt<=milin_s and milin_s<curt+work_t){
            pq.pop();milin.pop();
            pq.push({work_d,work_t+curt-milin_s});
            pq.push({milin_d,milin_t});
            curt=milin_s;
        }
        else{
            if(curt+work_t>work_d){cout<<"NO";return;}
            pq.pop();
            curt+=work_t;
        }
    }
    cout<<"YES\n"<<curt;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}