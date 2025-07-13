#include<iostream>
#include<vector>
#define ll long long
using namespace std;
ll gcd(ll x,ll y){
    if(y==0)return x;
    else return gcd(y,x%y);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a,b,c;
    cin>>a>>b>>c;
    if(b<c)swap(b,c);
    ll g=gcd(b,c);
    ll cur=b/g*c/g*g;
    // cout<<cur<<"\n";
    if(a>cur){
        cur=cur*(a/cur-1);
        a-=cur;
    }
    else{
        cur=0;
    }
    // cout<<g<<"\n";

    ll answer=2'000'000'000;
    for(ll i=a/b+1;i>=0;i--){
        ll tmpa=a-b*i;
        ll j=0;
        if(tmpa>0){
            j=tmpa/c;
            if(tmpa-j*c>0)j++;
        }
        answer=min(answer,b*i+c*j);
        if(answer==a)break;
        
    }
    cout<<answer+cur;
}