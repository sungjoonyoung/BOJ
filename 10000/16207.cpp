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
int cnt[100'001];
void solve(void){
    int N;cin>>N;
    for(int i=0;i<N;i++){
        int in;cin>>in;
        cnt[in]++;
    }
    ll answer=0;
    ll tmp=0;
    for(int i=100'001;i>0;){
        if(cnt[i]>=2){//가능
            //처음이면
            if(tmp==0){
                tmp+=i;
            }
            //이미 있었다면
            else{
                answer+=tmp*i;
                tmp=0;
            }
            cnt[i]-=2;
        }
        else if(cnt[i] and cnt[i-1]){//깎아서 가능
            //처음이면
            if(tmp==0){
                tmp+=i-1;
            }
            //이미 있었다면
            else{
                answer+=tmp*i-tmp;
                tmp=0;
            }
            cnt[i]--;cnt[i-1]--;
        }
        else{//불가능
            i--;
        }
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