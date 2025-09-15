#include<iostream>
#include<vector>
#include<cmath>
#define ll long long
using namespace std;
ll seg_tree[300'000];
ll lazy[300'000];
vector<int> adj[100'001];
int ind_arr[100'001]; // 사람->오일러
int range[100'001]; // 사람->오일러
int N,evenN;
int ind=-1;
int init_dfs(int x);
void lazy_func(int x,int h){
    int many=min((1<<evenN)+N,((x+1)<<(evenN-h))-1)-((x)<<(evenN-h))+1;
    seg_tree[x]+=lazy[x]*many;
    if(x*2<=(1<<evenN)+N)lazy[x*2]+=lazy[x];
    if(x*2+1<=(1<<evenN)+N)lazy[x*2+1]+=lazy[x];
    lazy[x]=0;
}

void setting_dfs(int x,int h,int s,int e,int item){
    if(lazy[x])lazy_func(x,h);

    int ind1=((x)<<(evenN-h));
    int ind2=((x+1)<<(evenN-h))-1;
    
    if(s<=ind1 and ind2<=e)lazy[x]+=item;
    else if(ind2<s or e<ind1)return;
    else {
        if(x*2<=(1<<evenN)+N)setting_dfs(x*2,h+1,s,e,item);
        if(x*2+1<=(1<<evenN)+N)setting_dfs(x*2+1,h+1,s,e,item);
    }
}

void find_dfs(int x,int h,int s,int e){
    if(lazy[x])lazy_func(x,h);

    int ind1=((x)<<(evenN-h));
    int ind2=((x+1)<<(evenN-h))-1;
    
    if(s<=ind1 and ind2<=e){
        cout<<seg_tree[x]<<"\n";
        return;
    }
    else if(ind2<s or e<ind1)return;
    else {
        if(x*2<=(1<<evenN)+N)find_dfs(x*2,h+1,s,e);
        if(x*2+1<=(1<<evenN)+N)find_dfs(x*2+1,h+1,s,e);
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int Q;
    cin>>N>>Q;
    evenN=(N==1)?0:(log2(N-1)+1);
    for(int i=1;i<=N;i++){
        int in;cin>>in;
        if(in==-1)continue;
        adj[in].push_back(i);
    }
    init_dfs(1);
    while(Q--){
        int op;cin>>op;
        if(op==1){
            int x,item;
            cin>>x>>item;
            int s=(1<<evenN)+ind_arr[x];
            int e=(1<<evenN)+range[x];
            // cout<<range[x]<<" ";
            setting_dfs(1,0,s,e,item);
        }
        else{
            int x;
            cin>>x;
            x=(1<<evenN)+ind_arr[x];
            find_dfs(1,0,x,x);
        }
    }
}
int init_dfs(int x){
    ind++;
    ind_arr[x]=ind;
    int maxnum=ind;
    for(int i=0;i<adj[x].size();i++){
        int nx=adj[x][i];
        maxnum=max(maxnum,init_dfs(nx));
    }
    range[x]=maxnum;
    return maxnum;
}