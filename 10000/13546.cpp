#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<cmath>
using namespace std;

int answer[100'000];
int s[100'001];
int e[100'001];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;cin>>N;
    int K;cin>>K;
    int Ns=sqrt(N);
    vector<int> v;v.resize(N+1);v[0]=0;
    for(int i=1;i<=N;i++)cin>>v[i];
    int M;cin>>M;
    vector<pair<pair<int,int>,int>> Query;
    for(int i=0;i<M;i++){
        int x,y;cin>>x>>y;
        Query.push_back({{x,y},i});
    }
    sort(Query.begin(),Query.end(),[&](pair<pair<int,int>,int>a,pair<pair<int,int>,int>b){
        return ((a.first.first/Ns==b.first.first/Ns)?
        a.first.second<b.first.second:
        a.first.first/Ns<b.first.first/Ns);
    });
    int shell=-1;//현재 셸 위치
    int ind=0;    //현재 셸 위치 바로 왼쪽
    int res=0;    //현재 셸 외부의 최대 길이
    for(int i=0;i<Query.size();i++){
        if(Query[i].first.first/Ns>shell){
            for(int j=0;j<100'001;j++)s[j]=2'000'000'000;
            for(int j=0;j<100'001;j++)e[j]=0;
            shell=Query[i].first.first/Ns;
            ind=shell*Ns;
            e[v[ind]]=ind;
            res=0;
            // cout<<"A";
        }
        while(ind<Query[i].first.second){
            ind++;
            e[v[ind]]=ind;
            if(ind>=(shell+1)*Ns-1)s[v[ind]]=min(s[v[ind]],ind);
            res=max(res,e[v[ind]]-s[v[ind]]);
        }
        int maxnum=res;
        for(int j=Query[i].first.first;j<=min(ind,(shell+1)*Ns-1);j++){
            int tmp=v[j];
            maxnum=max(maxnum,e[v[j]]-j);
        }
        answer[Query[i].second]=maxnum;
    }
    for(int i=0;i<M;i++)cout<<answer[i]<<"\n";
}