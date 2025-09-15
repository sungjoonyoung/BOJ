#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(v) (v).begin(), (v).end()
using namespace std;
int arr[6][3]={
    {1,2,3},
    {1,3,2},
    {2,1,3},
    {2,3,1},
    {3,1,2},
    {3,2,1}
};
int man[4];
void solve(void){
    int N;
    cin>>N;
    vector<int> v(N);
    vector<int> ori(N);
    for(int i=0;i<N;i++){
        cin>>ori[i];
        man[ori[i]]++;
    }
    //123
    //132
    //213
    //231
    //312
    //321
    ll answer=2'000'000'000'000'000'000;
    for(int t=0;t<6;t++){
        ll tmp=0;
        ll ts=0;
        int fir=arr[t][0];
        int sec=arr[t][1];
        int thi=arr[t][2];
        for(int i=0;i<man[fir];i++){
            tmp+=(ori[i]!=fir);
            ts+=(ori[i]==sec);
        }
        for(int i=man[fir];i<man[fir]+man[sec];i++){
            if(ori[i]==sec)continue;
            else if(ori[i]==fir and ts) ts--;
            else tmp++;
        }

        answer=min(answer,tmp);
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