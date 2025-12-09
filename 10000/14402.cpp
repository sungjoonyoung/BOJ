#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<queue>
#include<map>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define all(v) (v).begin(), (v).end()
using namespace std;
map<string,vector<int>> m;
void solve(void){
    int N;cin>>N;
    int answer=0;
    while(N--){
        string str;cin>>str;
        char c;cin>>c;
        if(c=='+'){
            m[str].push_back(1);
        }
        else{
            if(m[str].empty() or m[str].back()==0)m[str].push_back(0);
            else m[str].pop_back();
        }
    }
    for(auto c:m){
        answer+=c.second.size();
    }
    cout<<answer;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}