#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define all(v) (v).begin(), (v).end()
using namespace std;
/*
 1 1 일 때 손해 보는 걸 매꿀 수 있음.

 어레이로 바꿔서 다른 게 몇 개야? 10개로 줄음
*/
int A[200'000];
int B[200'000];
ll cnt_B[1025];
ll cnt_A[1025];
int biB[10];
void solve(void){
    // cout<<(1<<10);1024
    ll N,Q;cin>>N>>Q;
    for(int i=0;i<N;i++){
        cin>>A[i];
        cnt_A[A[i]]++;
    }
    for(int i=0;i<N;i++){
        cin>>B[i];
        cnt_B[B[i]]++;
        int tmp=B[i];
        for(int j=0;j<10;j++)biB[j]+=((B[i]&(1<<j))>0);
    }
    // for(int i=0;i<10;i++)cout<<biB[i]<<" ";
    ll answer=0;
    for(int i=0;i<N;i++){
        int target=A[i];
        for(int j=0;j<10;j++){
            //1이면
            if((A[i]&(1<<j)))answer+=((1LL<<j))*(N-biB[j]);//0의 개수
            //0이면
            else answer+=((1LL<<j))*(biB[j]);//1의 개수
        }
    }
    //그 다음은 어케하노
    vector<pair<ll,pll>> v;
    for(int i=(1<<10)-1;i>=0;i--){
        for(int j=(1<<10)-1;j>=0;j--){
            v.push_back({(i&j),{i,j}});
        }
    }
    sort(all(v),greater<>());
    // sort(all(v));
    ll tmp=0;
    for(int i=0;v.size();i++){
        if(tmp>=Q)break;
        int x=v[i].second.first;
        int y=v[i].second.second;
        if(cnt_A[x]&&cnt_B[y]){
            ll c=cnt_A[x]*cnt_B[y];
            if(tmp+c>=Q)c=Q-tmp;
            answer+=v[i].first*c;
            tmp+=c;
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