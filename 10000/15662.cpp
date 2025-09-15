#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(v) (v).begin(), (v).end()
using namespace std;
void solve(void){
    int T;cin>>T;
    vector<string> v;
    vector<int> diff;
    v.resize(T);
    diff.resize(T);
    for(int i=0;i<T;i++)cin>>v[i];
    int N;
    cin>>N;
    while(N--){
        //diff init
        for(int i=0;i<T;i++)diff[i]=0;
        int x,op;
        cin>>x>>op;
        x--;
        diff[x]=op;
        //r
        for(int i=x+1;i<T;i++){
            if(v[i-1][2]!=v[i][6]){
                if((i-x)%2)diff[i]=op*(-1);
                else diff[i]=op;
            }
            else break;
        }
        //l
        for(int i=x-1;i>=0;i--){
            if(v[i][2]!=v[i+1][6]){
                if((x-i)%2) diff[i]=op*(-1);
                else diff[i]=op;
            }
            else break;
        }
        for(int i=0;i<T;i++){
            if(diff[i]==1) 
                for(int k=0;k<7;k++)
                    for(int j=0;j<7;j++)swap(v[i][j],v[i][j+1]);
            else if(diff[i]==-1) for(int j=0;j<7;j++)swap(v[i][j],v[i][j+1]);
        }
    }
    int answer=0;
    for(int i=0;i<T;i++)answer+=v[i][0]-'0';
    cout<<answer;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}