#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int ind_arr[200'001]; //실제 -> 오일러
int seg_tree[600'001];
int range[200'001]; // 범위의 e값
int height[200'001];
vector<int> adj[200'001];
int ind=0;
int dfs(int x,int h);
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,C;
    cin>>N>>C;
    for(int i=0;i<N-1;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(C,1);
    int evenN=(N==1)?0:(log2(N-1)+1);
    int Q;
    cin>>Q;
    while(Q--){
        int op;cin>>op;
        if(op==1){
            int x;cin>>x;
            int tmpx=(1<<evenN)+ind_arr[x];
            while(tmpx){
                seg_tree[tmpx]++;
                tmpx/=2;
            }
        }
        else{
            int x;cin>>x;
            int s=(1<<evenN)+ind_arr[x];
            int e=(1<<evenN)+range[x];
            long long answer=0;
            while(s<=e){
                if(s%2==1)answer+=seg_tree[s];
                if(e%2==0)answer+=seg_tree[e];
                s=(s+1)/2;
                e=(e-1)/2;
            }
            cout<<answer*height[x]<<"\n";
        }
    }   
}
int dfs(int x,int h){
    ind++;
    ind_arr[x]=ind;
    height[x]=h;
    int maxnum=ind;
    for(int i=0;i<adj[x].size();i++){
        int nx=adj[x][i];
        if(height[nx])continue;
        maxnum=max(maxnum,dfs(nx,h+1));
    }
    range[x]=maxnum;
    return maxnum;
}