#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> adj_list[401];
int c[401][401];//capacity
int f[401][401];//flowing
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    for(int i=0;i<M;i++){
        int a,b;cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
        c[a][b]++;
    }

    long long answer=0;
    while(1){
        queue<int> q;
        vector<int> P(401,-1);

        q.push(1);
        [&](){while(!q.empty()){
            int curx=q.front();
            q.pop();
            for(int i=0;i<adj_list[curx].size();i++){
                int nx=adj_list[curx][i];
                if(P[nx]!=-1)continue;
                if(c[curx][nx]-f[curx][nx]<=0)continue;
                q.push(nx);
                P[nx]=curx;
                if(nx==2)break;
            }
        }}();

        if(P[2]==-1)break;

        int minflow=2'000'000'000;
        for(int i=2;i!=1;i=P[i])minflow=min(minflow,c[P[i]][i]-f[P[i]][i]);

        for(int i=2;i!=1;i=P[i]){
            f[P[i]][i]+=minflow;
            f[i][P[i]]-=minflow;
        }

        answer+=minflow;
    }
    cout<<answer;
}