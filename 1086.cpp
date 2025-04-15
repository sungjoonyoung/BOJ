#include<iostream>
#include<string>
#include<vector>
#define ll long long
using namespace std;
ll arr[(1<<15)][100];
vector<string> v;
vector<int> rest;
vector<int> tenrest;
ll gcd(ll x, ll y){
    if(y==0) return x;
    return gcd(y,x%y);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    int K;
    cin>>K;
    for(int i=0;i<v.size();i++){
        int tmp=v[i][0]-'0';
        tmp%=K;
        for(int j=1;j<v[i].size();j++){
            tmp*=10;
            tmp+=v[i][j]-'0';
            tmp%=K;
        }
        rest.push_back(tmp);
    }
    int tmp=1;
    for(int i=0;i<55;i++){
        tmp%=K;
        tenrest.push_back(tmp);
        tmp*=10;
    }
    arr[0][0]=1;
    for(int i=0;i<(1<<N);i++){
        for(int j=0;j<K;j++){
            for(int last=0;last<N;last++){
                if((i&(1<<last))!=0)continue;
                ll tmp=(j*tenrest[v[last].size()])%K;
                tmp+=rest[last];
                tmp%=K;
                arr[i|(1<<last)][tmp]+=arr[i][j];
            }
        }
    }
    ll p,q;
    p=q=0;
    for(int i=0;i<K;i++){
        q+=arr[(1<<N)-1][i];
        if(i==0)p+=arr[(1<<N)-1][0];
    }
    //cout<<p<<" "<<q;
    ll t = gcd(q,p);
    cout<<p/t<<"/"<<q/t;
}