#include<iostream>
#include<vector>
using namespace std;
int N,M;
void solve(void){
    vector<vector<int>> v;
    vector<int> s;
    int answer=0;
    for(int i=0;i<N;i++){
        int tmp;
        cin>>tmp;
        answer+=tmp;
        v.push_back(vector<int>());
        s.push_back(0);
        while(tmp--){
            int in;
            cin>>in;
            v[i].push_back(in);
            s[i]+=in;
        }
    }
    while(answer){
        int key=1;
        for(int i=0;i<N;i++){
            if(v[i].empty())continue;
            int maxn=max(-1,s[i]-v[i].back());
            int minn=min(1000000000,s[i]-v[i].back());
            for(int j=0;j<N;j++){
                if(i==j)continue;
                maxn=max(maxn,s[j]);
                minn=min(minn,s[j]);
            }
            if(maxn-minn<=M){
                s[i]-=v[i].back();
                v[i].pop_back();
                key=0;
                break;
            }
        }
        if(key){
            cout<<"No\n";
            return;
        }
        answer--;  
    }
    cout<<"Yes\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        cin>>N>>M;
        if(!N and !M)break;
        solve();
    }
}