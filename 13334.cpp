#include<iostream>
#include<utility>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> ypq;
priority_queue<int,vector<int>,greater<int>>table;
vector<int> v;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int x,y;
        cin>>x>>y;
        if(x>y)swap(x,y);
        ypq.push({y,x});
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int answer=0;
    int L;
    cin>>L;
    int before=-100000001;
    for(int i=0;i<v.size();i++){
        int tmpx=v[i];
        if(tmpx==before)continue;
        before=tmpx;
        int tmpy=v[i]+L;
        while(!ypq.empty() and ypq.top().first<=tmpy){
            table.push(ypq.top().second);
            ypq.pop();
        }
        while(!table.empty() and table.top()<tmpx)table.pop();
        int ts=table.size();
        answer=max(answer,ts);
    }
    cout<<answer;
}