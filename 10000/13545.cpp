#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<cmath>
using namespace std;
/*
늘어날 때는 쉬움 쫙쫙쫙 인덱스 한 칸씩 움직이면서 누적합 체크하면 됨
줄어들 때는? 특히 왼쪽이 줄어들겠지 -> stack으로 왼쪽 부분을 고민하자.\
아니면 유니온파인드 하면 돼. 유니온 파인드 하면 안 되겠다
*/
int s,e;
int answer[100'000];
int prefix[200'001];
int strt_i[200'001];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;cin>>N;
    int Ns=sqrt(N);
    vector<int> v;v.resize(N+1);v[0]=0;
    for(int i=1;i<=N;i++)cin>>v[i];
    for(int i=1;i<=N;i++)v[i]+=v[i-1];
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
    int shell=-1'000'000'000;//현재 셸 위치
    int e=0;    //현재 셸 위치 바로 왼쪽
    int res=0;  //현재 셸 외부의 최대 길이
    for(int i=0;i<Query.size();i++){
        if(Query[i].first.first/Ns>shell){
            for(int j=0;j<200'001;j++)strt_i[j]=prefix[j]=0;
            shell=Query[i].first.first/Ns;
            e=shell*Ns;
            prefix[v[e]+100'000]=e;
            res=0;
            // cout<<"A";
        }
        while(e<Query[i].first.second){
            e++;
            prefix[v[e]+100'000]=e;
            if(e>=(shell+1)*Ns-1){
                if(strt_i[v[e]+100'000])res=max(res,e-strt_i[v[e]+100'000]);
                else strt_i[v[e]+100'000]=e;
            }
        }
        int maxnum=res;
        for(int j=Query[i].first.first;j<=min(e,(shell+1)*Ns-1);j++){
            int tmp=v[j-1];
            maxnum=max(maxnum,prefix[tmp+100'000]-j+1);
        }
        answer[Query[i].second]=maxnum;
    }
    for(int i=0;i<M;i++)cout<<answer[i]<<"\n";
    //짜투리는 나중에
}