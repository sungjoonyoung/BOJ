#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
pair<int,int> range[200005];
vector<int> adj_list[200005];
int o_arr[200005];
vector<bool> visited(200005);
vector<int> arr[600000];
int ind_match[200005];
int N,evenN;
int ind=0;

pair<int,int> DFS(int x){
    pair<int,int> item_range={200002,-200002};
    visited[x]=1;
    for(int i=0;i<adj_list[x].size();i++){
        int nx=adj_list[x][i];
        if(visited[nx])continue;
        pair<int,int> tmp_range=DFS(nx);
        item_range.first=min(item_range.first,tmp_range.first);
        item_range.second=max(item_range.second,tmp_range.second);
    }
    ind_match[ind]=x;
    item_range.first=min(item_range.first,ind);
    item_range.second=max(item_range.second,ind);
    range[x]=item_range;
    ind++;
    return item_range;
}

void setting_tree(void){
    for(int i=0;i<(1<<evenN);i++){
        if(i<N)arr[(1<<evenN)+i].push_back(o_arr[ind_match[i]]);
        else arr[(1<<evenN)+i].push_back(200005);
    }
    for(int h=(1<<evenN)/2;h>0;h/=2){
        for(int i=h;i<h*2;i++){
            int ind0,ind1,ind2;
            ind0=ind1=ind2=0;
            arr[i].resize(arr[i*2].size()+arr[i*2+1].size());
            while(ind1<arr[i*2].size() and ind2<arr[i*2+1].size()){
                if(arr[i*2][ind1]<arr[i*2+1][ind2]){
                    arr[i][ind0++]=arr[i*2][ind1++];
                }
                else{
                    arr[i][ind0++]=arr[i*2+1][ind2++];
                }
            }
            for(;ind1<arr[i*2].size();ind1++){
                arr[i][ind0++]=arr[i*2][ind1];
            }
            for(;ind2<arr[i*2+1].size();ind2++){
                arr[i][ind0++]=arr[i*2+1][ind2];
            }
        }
    }
}

long long solve(void){
    int v,c;
    cin>>v>>c;
    v--;
    long long answer=0;
    int ind1=(1<<evenN)+range[v].first;
    int ind2=(1<<evenN)+range[v].second;
    while(ind1<=ind2){
        // cout<<(upper_bound(arr[ind1].begin(),arr[ind1].end(),k)-arr[ind1].begin());
        // break;
        if(ind1%2==1)answer+=(long long)(upper_bound(arr[ind1].begin(),arr[ind1].end(),c)-arr[ind1].begin());
        if(ind2%2==0)answer+=(long long)(upper_bound(arr[ind2].begin(),arr[ind2].end(),c)-arr[ind2].begin());
        answer%=1'000'000'007;
        ind1=(ind1+1)/2;
        ind2=(ind2-1)/2;
    }
    return answer;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int M,C;
    cin>>N>>M>>C;
    evenN=(N==1)?0:(log2(N-1)+1);
    for(int i=0;i<N;i++)cin>>o_arr[i];
    for(int i=0;i<N-1;i++){
        int x,y;
        cin>>x>>y;
        x--;y--;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }
    DFS(0);
    //cout<<range[1].first<<" "<<range[1].second;
    setting_tree();
    long long answer=0;
    while(M--){
        answer+=solve();
        //cout<<solve()<<"\n";
        answer%=1'000'000'007;
    }
    
    cout<<answer;
}