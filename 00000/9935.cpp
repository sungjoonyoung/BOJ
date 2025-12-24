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
    string str,bomb;cin>>str>>bomb;
    string answer="";
    for(int i=0;i<str.size();i++){
        answer.push_back(str[i]);
        [&](){
            if(str[i]==bomb.back()){
                if(answer.size()<bomb.size())return;
                for(int j=0;j<bomb.size();j++){
                    if(bomb[bomb.size()-1-j]!=answer[answer.size()-1-j])return;
                }
                for(int j=0;j<bomb.size();j++)answer.pop_back();
            }
        }();
    }
    if(answer.empty()) cout<<"FRULA";
    else cout<<answer;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}