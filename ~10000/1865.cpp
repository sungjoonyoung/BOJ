#include<iostream>
#include<vector>
#define INF (long long)1e18/2
using namespace std;
struct struc{
    long long S,E,T;
};
vector<struct struc> v;
long long arr[501];
void solve(void){
    int N,M,W;
    cin>>N>>M>>W;
    for(int i=0;i<M;i++){
        long long x,y,w;
        cin>>x>>y>>w;
        v.push_back({x,y,w});
        v.push_back({y,x,w});
    }
    for(int i=0;i<W;i++){
        long long x,y,w;
        cin>>x>>y>>w;
        v.push_back({x,y,-w});
    }
    //arr[N]=0;
    for(int i=0;i<N-1;i++){
        for(int j=0;j<v.size();j++){
            //if(arr[v[j].S]==INF)continue;
            arr[v[j].E]=min(arr[v[j].E],arr[v[j].S]+v[j].T);
        }
    }
    

    for(int j=0;j<v.size();j++){
        if(arr[v[j].S]==INF)continue;
        if(arr[v[j].E]>arr[v[j].S]+v[j].T){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
    
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        fill(arr,arr+501,INF);
        v.clear();
        solve();
    }
}