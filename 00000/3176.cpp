#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
typedef struct{
    int x,minnum,maxnum;
}element;
typedef struct{
    int x,c;
}adj_edge;
element arr[18][100001];
vector<adj_edge> adj_list[100001];
int depth[100001];
void DFS(int x, int px,int d){
    depth[x]=d;
    
    for(int i=0;i<adj_list[x].size();i++){
        if(px==adj_list[x][i].x){
            arr[0][x]={adj_list[x][i].x,adj_list[x][i].c,adj_list[x][i].c};
            for(int h=1;h<=log2(d);h++){
                element tmp={0,1'000'001,-1};
                tmp.x=arr[h-1][arr[h-1][x].x].x;
                tmp.minnum=min(arr[h-1][arr[h-1][x].x].minnum,arr[h-1][x].minnum);
                tmp.maxnum=max(arr[h-1][arr[h-1][x].x].maxnum,arr[h-1][x].maxnum);
                arr[h][x]=tmp;
            }
        }
    }
    for(int i=0;i<adj_list[x].size();i++){
        if(px!=adj_list[x][i].x)DFS(adj_list[x][i].x,x,d+1);
    }
}
void solve(void){
    int a,b;
    cin>>a>>b;
    if(depth[a]<depth[b])swap(a,b);
    int maxnum=-1;
    int minnum=1'000'001;
    while(depth[a]>depth[b]){
        maxnum=max(maxnum,arr[(int)log2(depth[a]-depth[b])][a].maxnum);
        minnum=min(minnum,arr[(int)log2(depth[a]-depth[b])][a].minnum);
        a=arr[(int)log2(depth[a]-depth[b])][a].x;
    }
    while(a!=b){
        for(int h=17;h>=0;h--){
            if(arr[h][a].x!=arr[h][b].x){
                maxnum=max(maxnum,arr[h][a].maxnum);
                minnum=min(minnum,arr[h][a].minnum);
                a=arr[h][a].x;
                maxnum=max(maxnum,arr[h][b].maxnum);
                minnum=min(minnum,arr[h][b].minnum);
                b=arr[h][b].x;
                break;
            }
        }
        if(arr[0][a].x==arr[0][b].x){
            maxnum=max(maxnum,arr[0][a].maxnum);
            minnum=min(minnum,arr[0][a].minnum);
            a=arr[0][a].x;
            maxnum=max(maxnum,arr[0][b].maxnum);
            minnum=min(minnum,arr[0][b].minnum);
            b=arr[0][b].x;
            break;
        }
    }
    cout<<minnum<<" "<<maxnum<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;cin>>N;
    for(int i=0;i<N-1;i++){
        int x,y,c;
        cin>>x>>y>>c;
        adj_list[x].push_back({y,c});
        adj_list[y].push_back({x,c});
    }
    DFS(1,0,0);
    int T;
    cin>>T;
    while(T--)solve();
}