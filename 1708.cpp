#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
vector<pair<int,int>> v;
vector<pair<int,int>> table;
bool func(long long x3,long long y3){
    long long x1,x2,y1,y2;
    x1=table[table.size()-2].first;
    y1=table[table.size()-2].second;
    x2=table[table.size()-1].first;
    y2=table[table.size()-1].second;
    long long tmp=(x1*y2+x2*y3+x3*y1)-(y1*x2+y2*x3+y3*x1);
    //cout<<tmp<<"A";
    return (tmp==0 or tmp<0);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i].first>>v[i].second;
    sort(v.begin(),v.end());
    table.push_back({v[0].first,v[0].second});
    for(int i=1;i<N;i++){
        while(table.size()!=1 and func(v[i].first,v[i].second)){
            //cout<<i<<" "<<table.back().first<<" "<<table.back().second<<"\n";
            table.pop_back();
        }
        table.push_back({v[i].first,v[i].second});
        //cout<<table.back().first<<" "<<table.back().second<<"\n";
    }
    //for(int i=0;i<table.size();i++)cout<<table[i].first<<" "<<table[i].second<<"\n";
    int tmpx=table.back().first;
    for(int i=N-1;i>=0;i--){
        if(v[i].first==tmpx)continue;
        while(table.size()!=1 and func(v[i].first,v[i].second)){
            table.pop_back();
        }
        table.push_back({v[i].first,v[i].second});
    }
    cout<<table.size()-1;
    //for(int i=0;i<table.size();i++)cout<<table[i].first<<" "<<table[i].second<<"\n";
}