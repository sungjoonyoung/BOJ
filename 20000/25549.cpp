#include<iostream>
#include<set>
#include<vector>
using namespace std;
int Pointer[200'001];
set<int> arr[200'001];
int MEX[200'001];
vector<int> adj_list[200'001];
int N;
void _merge(int x, int y){
    int Px=Pointer[x];
    int Py=Pointer[y];
    if(arr[Px].size()>=arr[Py].size()){
        arr[Px].insert(arr[Py].begin(),arr[Py].end());
        arr[Py].clear();
    }
    else{
        arr[Py].insert(arr[Px].begin(),arr[Px].end());
        arr[Px].clear();
        swap(Pointer[x],Pointer[y]);
    }
}
int DFS(int x,int bx){
    int maxnum=0;
    for(int i=0;i<adj_list[x].size();i++){
        int y=adj_list[x][i];
        if(y==bx)continue;
        maxnum=max(maxnum,DFS(y,x));
        _merge(x,y);
    }
    while(arr[Pointer[x]].find(maxnum)!=arr[Pointer[x]].end())maxnum++;
    
    // for(auto a:arr[Pointer[x]])cout<<a<<" ";
    // cout<<"\n";
    MEX[x]=maxnum;
    return maxnum;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    int start=1;
    for(int i=1;i<=N;i++){
        int in;
        cin>>in;
        Pointer[i]=i;
        if(in==-1){
            start=i;
            continue;
        }
        adj_list[in].push_back(i);
    }
    for(int i=1;i<=N;i++){
        int in;
        cin>>in;
        arr[i].insert(in);
    }
    DFS(start,0);
    for(int i=1;i<=N;i++)cout<<MEX[i]<<"\n";
}