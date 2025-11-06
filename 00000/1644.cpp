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
using namespace std;
bool che[6'000'001];
vector<int> prime;
void primefunc(void ){
    for (int i = 2; i <= sqrt(5'000'000); i++){
        if (che[i] == 1)continue;
        for (int j = i * i; j <= 5'000'000; j += i)
            che[j] = 1;
    }
    for (int i = 2; i <= 5'000'000; i++){
        if (che[i] == 0)prime.push_back(i);
    }
    
}
void solve(void){
    int N;cin>>N;
    int s,e;s=e=0;
    int answer=0;
    int tmp=prime[0];
    while(prime[e]<=N and e<prime.size()){
        if(tmp<N){e++;tmp+=prime[e];}
        else if(tmp>N){tmp-=prime[s];s++;}
        else {answer++;e++;tmp+=prime[e];}
    }
    cout<<answer;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    primefunc();
    while(T--)solve();
}