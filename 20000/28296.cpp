#include<iostream>
#include<map>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
vector<pair<int,pair<int,int>>> Query_vector;
map<int,int> arr[100'001];
int Point[100'001];
int Parent[100'001];
long long answer[100'000];
int find(int x){
    if(Parent[x]==x)return x;
    return Parent[x]=find(Parent[x]);
}
void _union(int x,int y){
    int px=find(x);
    int py=find(y);
    Parent[py]=px;
}
void _merge(int x,int y,long long w){
    if(arr[Point[x]].size()>=arr[Point[y]].size()){
        for(auto a:arr[Point[y]]){
            answer[a.first]+=w*arr[Point[x]][a.first]*arr[Point[y]][a.first];
            arr[Point[x]][a.first]+=a.second;
        }
        arr[Point[y]].clear();
    }
    else{
        for(auto a:arr[Point[x]]){
            answer[a.first]+=w*arr[Point[x]][a.first]*arr[Point[y]][a.first];
            arr[Point[y]][a.first]+=a.second;
        }
        arr[Point[x]].clear();
        swap(Point[x],Point[y]);
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,K,M;
    cin>>N>>K>>M;
    for(int i=1;i<=N;i++){
        int in;
        cin>>in;
        arr[i][in]++;
        Parent[i]=Point[i]=i;
    }
    for(int i=0;i<M;i++){
        int w,a,b;
        cin>>a>>b>>w;
        Query_vector.push_back({w,{a,b}});
    }
    sort(Query_vector.begin(),Query_vector.end(),greater<pair<int,pair<int,int>>>());
    int count=0;
    for(auto a:Query_vector){
        if(count==N-1)break;
        int w=a.first;
        int x=a.second.first;
        int y=a.second.second;
        if(find(x)==find(y))continue;
        _merge(find(x),find(y),w);
        // for(int i=1;i<=N;i++)cout<<arr[i].size()<<" ";
        // cout<<"\n";
        _union(x,y);
        count++;
    }
    // for(int i=1;i<=N;i++)cout<<arr[i].size()<<" ";
    // for(int i=1;i<=N;i++)cout<<Parent[i]<<" ";
    // for(int i=1;i<=N;i++)cout<<Point[i]<<" ";
    for(int i=1;i<=K;i++)cout<<answer[i]<<"\n";
}