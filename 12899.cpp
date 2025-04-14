#include<iostream>
#include<cmath>
#include<vector>
#define ll long long
using namespace std;
vector<ll> v;
ll N=2'000'001;
ll evenN=pow(2,(ll)(log2(N-1)+1));
void grade(void){
    ll x;
    cin>>x;
    ll ind=1;
    while(1){
        if(ind>=evenN){
            cout<<ind-evenN+1<<"\n";
            while(ind){
                v[ind]--;
                ind/=2;
            }
            break;
        }
        if(x<=v[ind*2]){
            ind*=2;
        }
        else{
            x-=v[ind*2];
            ind=ind*2+1;
        }
    }
}
void add(void){
    ll x;
    cin>>x;
    x--;
    x+=evenN;
    while(x){
        v[x]++;
        x/=2;
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //cout<<evenN;
    v.resize(evenN*2+1);
    int T;
    cin>>T;
    while(T--){
        int op;
        cin>>op;
        if(op==2)grade();
        else add();
    }
}