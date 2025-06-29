#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<utility>
using namespace std;
vector<pair<int,int>> v;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    for(int i=1;i<=sqrt(N);i++){
        if(N%i==0){
            v.push_back({i,0});
            if(i!=N/i)v.push_back({N/i,0});
            //cout<<i<<" "<<N/i<<"\n";
        }
    }
    //cout<<v[0].first;
    sort(v.begin(),v.end());
    v[0].second=1;
    for(int i=1;i<v.size();i++){
        for(int j=0;j<i;j++){
            if(v[i].first%v[j].first==0)v[i].second+=v[j].second;
        }
    }
    
    cout<<v.back().second;
}