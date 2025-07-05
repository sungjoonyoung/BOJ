#include<iostream>
#include<vector>
#include<set>
#include<utility>
using namespace std;
int ini_P[100'001];
int Parent[100'001];
int P[100'001];
set<int> arr[100'001];
vector<pair<int,int>> Query_vector;
vector<int> answer_vector;
int find(int x){
    if(Parent[x]==x)return x;
    return Parent[x]=find(Parent[x]);
}
void _union(int x,int y){
    int px=find(x);
    int py=find(y);
    Parent[py]=px;
}
void _merge(int x, int y){
    x=find(x);
    y=find(y);
    if(arr[P[x]].size()>=arr[P[y]].size()){
        arr[P[x]].insert(arr[P[y]].begin(),arr[P[y]].end());
        arr[P[y]].clear();
    }
    else{
        arr[P[y]].insert(arr[P[x]].begin(),arr[P[x]].end());
        arr[P[x]].clear();
        swap(P[x],P[y]);
    }
    _union(x,y);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,Q;
    cin>>N>>Q;
    ini_P[1]=P[1]=Parent[1]=1;
    for(int i=2;i<=N;i++){
        int in;
        cin>>in;
        ini_P[i]=in;
        Parent[i]=P[i]=i;
    }
    for(int i=1;i<=N;i++){
        int in;
        cin>>in;
        arr[i].insert(in);
    }

    for(int i=0;i<(N-1)+Q;i++){
        int op,x;
        cin>>op>>x;
        Query_vector.push_back({op,x});
    }

    for(int i=Query_vector.size()-1;i>=0;i--){
        int op=Query_vector[i].first;
        int x=Query_vector[i].second;
        if(op==1){
            _merge(ini_P[x],x);
            // cout<<arr[P[find(x)]].size()<<"A\n";
        }
        else{
            answer_vector.push_back(arr[P[find(x)]].size());
        }
    }
    for(int i=answer_vector.size()-1;i>=0;i--)cout<<answer_vector[i]<<"\n";
}