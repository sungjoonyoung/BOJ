#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> adj_list[1000];
int c[1000][1000];//capacity
int f[1000][1000];//flowing
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    for(int i=0;i<M;i++){
        int a,b;cin>>a>>b;
        if(a!=2 and b!=1){ //a->b
            adj_list[a*2].push_back(b*2-1);
            adj_list[b*2-1].push_back(a*2);
            c[a*2][b*2-1]=1;        
        }
        if(b!=2 and a!=1){ //b->a
            adj_list[b*2].push_back(a*2-1);
            adj_list[a*2-1].push_back(b*2);
            c[b*2][a*2-1]=1;
        }
        adj_list[a*2].push_back(a*2-1);
        adj_list[a*2-1].push_back(a*2);
        c[a*2-1][a*2]=1;
        adj_list[b*2].push_back(b*2-1);
        adj_list[b*2-1].push_back(b*2);
        c[b*2-1][b*2]=1;
    }

    long long answer=0;
    while(1){
        queue<int> q;
        vector<int> P(1000,-1);

        q.push(2);
        [&](){while(!q.empty()){
            int curx=q.front();
            q.pop();
            for(int i=0;i<adj_list[curx].size();i++){
                int nx=adj_list[curx][i];
                if(P[nx]!=-1)continue;
                if(c[curx][nx]-f[curx][nx]<=0)continue;
                q.push(nx);
                P[nx]=curx;
                if(nx==3)return;
            }
        }}();

        if(P[3]==-1)break;

        int minflow=2'000'000'000;
        for(int i=3;i!=2;i=P[i])minflow=min(minflow,c[P[i]][i]-f[P[i]][i]);

        for(int i=3;i!=2;i=P[i]){
            f[P[i]][i]+=minflow;
            f[i][P[i]]-=minflow;
        }

        answer+=minflow;
    }
    cout<<answer;
}