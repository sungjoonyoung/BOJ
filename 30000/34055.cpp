#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
vector<pair<int,int>> v;
vector<ll> sizev;
vector<ll> sum_sizev;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,H;
    cin>>N>>H;
    for(int i=0;i<N;i++){
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    int ind=1;
    int before=1;
    for(auto a:v){
        if(a.first>before){
            sizev.push_back(a.first-before);
            before=max(a.second+1,before);
        }
        else before=max(a.second+1,before);
    }
    sizev.push_back(H-before+1);
    // for(auto a:sizev)cout<<a<<" ";
    sort(sizev.begin(),sizev.end());
    // for(auto a:sizev)cout<<a<<" ";
    // cout<<"\n";
    for(int i=0;i<sizev.size();i++){
        sum_sizev.push_back(sizev[i]);
        if(i!=0)sum_sizev[i]+=sum_sizev[i-1];
    }
    // for(auto a:sum_sizev)cout<<a<<" ";
    // cout<<"\n";

    int Q;
    cin>>Q;
    while(Q--){
        int T;
        cin>>T;
        int ind=lower_bound(sizev.begin(),sizev.end(),T)-sizev.begin();
        ll tmp;
        if(ind==0)tmp=sum_sizev.back();
        else tmp=sum_sizev.back()-sum_sizev[ind-1];
        // cout<<tmp<<" ";
        tmp-=((ll)sum_sizev.size()-ind)*(T-1);
        cout<<tmp<<"\n";
    }

}