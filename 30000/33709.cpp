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
void solve(void){
    string str;cin>>str;cin>>str;
    int answer=0;
    int tmp=0;
    for(auto c:str){
        if(0<=c-'0' and c-'0'<10){
            tmp*=10;tmp+=c-'0';
        }
        else{
            answer+=tmp;tmp=0;
        }
    }
    answer+=tmp;
    cout<<answer;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}