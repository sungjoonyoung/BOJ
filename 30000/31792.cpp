#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<set>
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
multiset<int> ms;
void solve(void) {
    int op;cin>>op;
    if(op==1){
        int in;cin>>in;
        ms.insert(in);
    }
    else if(op==2){
        int in;cin>>in;
        if(ms.find(in)==ms.end())return;
        ms.erase(ms.find(in));
    }
    else{
        int answer=0;
        auto ind=ms.begin();
        while(ind!=ms.end()){
            answer++;
            auto nxt=ms.lower_bound((*ind)*2);
            ind=nxt;
        }
        cout<<answer<<"\n";
    }
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}