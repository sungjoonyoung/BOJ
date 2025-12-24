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

void solve(void){
    int N;cin>>N;
    cin.ignore();
    for(int i=1;i<=N;i++){
        string str;getline(cin,str);
        vector<string> s;s.clear();
        string tmp="";
        cout<<"Case #"<<i<<": ";
        for(auto c:str){
            if(c==' ' and tmp!=""){
                s.push_back(tmp);
                tmp.clear();
                continue;
            }
            if(c!=' ')tmp+=c;
        }
        if(tmp!="")s.push_back(tmp);
        while(!s.empty()){
            cout<<s.back();
            cout<<" ";
            s.pop_back();
        }
        cout<<"\n";
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}