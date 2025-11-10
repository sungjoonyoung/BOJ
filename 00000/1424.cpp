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
    int N,L,C;cin>>N>>L>>C;
    int answer=0; //cd 칸
    int tmp=(C+1)/(L+1); //하나에 들어갈 수 있는 양
    if(tmp%13==0){tmp--;}
    answer+=(N+tmp-1)/tmp;
    if((N%tmp)!=0 and (N%tmp)%13==0 and (N%tmp==tmp-1 or answer==1))answer++;
    cout<<answer;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}