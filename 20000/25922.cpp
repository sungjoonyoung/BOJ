#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<queue>
#include<cmath>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define all(v) (v).begin(), (v).end()
using namespace std;

void solve(void){
    int N;cin>>N;
    string str;
    cout<<"? 1000000000\n";
    cout<<flush;
    cin>>str;
    cout<<"! ";
    reverse(all(str));
    vi v;
    for(int i=0;i<str.size();i+=9){
        ll tmp=0;
        for(int j=i;j<min(i+9,(int)str.size());j++){
            tmp+=(str[j]-'0')*pow(10,j-i);
        }
        v.push_back((int)tmp);
    }
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<"\n";
    cout<<flush;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}