#include<iostream>
#include<utility>
#include<vector>
#include<queue>
#include<cmath>
using namespace std;
int d[40001];
pair<int, int> arr[100][40001];
vector<pair<int,int>> tr[40001];
queue<pair<int,int>> q;
int N;
void solve(void);
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    for(int i=0;i<N-1;i++){
        int a,b,v;
        cin>>a>>b>>v;
        tr[a].push_back({b,v});
        tr[b].push_back({a,v});
    }
    d[1]=1;
    q.push({1,1});
    while(!q.empty()){
        int curx=q.front().first;
        int curd=q.front().second;
        q.pop();
        for(int i=0;i<tr[curx].size();i++){
            int tmpx=tr[curx][i].first;
            if(d[tmpx])continue;
            int tmpw=tr[curx][i].second;
            q.push({tmpx,curd+1});
            d[tmpx]=curd+1;
            arr[0][tmpx].first=curx;
            arr[0][tmpx].second=tmpw;

            for(int k=1;k<=log2(d[tmpx]-1);k++){
                arr[k][tmpx].first=arr[k-1][arr[k-1][tmpx].first].first;
                arr[k][tmpx].second=arr[k-1][arr[k-1][tmpx].first].second+arr[k-1][tmpx].second;
            }
        }
    }
    // for(int i=0;i<=N;i++){
    //     for(int j=1;j<=N;j++)cout<<arr[i][j].second<<" ";
    //     cout<<"\n";
    // }
    int M;
    cin>>M;
    while(M--)solve();
}
void solve(void){
    int a,b;
    cin>>a>>b;
    if(d[a]<d[b])swap(a,b);
    int av,bv;
    av=bv=0;
    //for(int i=1;i<=N;i++)cout<<d[i]<<" ";
    while(d[a]>d[b]){
        int tmpd=log2(d[a]-d[b]);
        av+=arr[tmpd][a].second;
        a=arr[tmpd][a].first;
    }
    while(a!=b){
        int ind=0;
        while(arr[ind][a].first!=arr[ind][b].first){
            ind++;
        }
        if(ind==0){
            av+=arr[ind][a].second;
            bv+=arr[ind][b].second;
            a=b;
        }
        else{
            av+=arr[ind-1][a].second;
            bv+=arr[ind-1][b].second;
            a=arr[ind-1][a].first;
            b=arr[ind-1][b].first;
        }
    }
    cout<<av+bv<<"\n";
}