#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> adj_list[3'001];
int c[3'001][3'001];//capacity
int f[3'001][3'001];//flowing
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M,K;
    cin>>N>>M>>K;
    for(int i=1;i<=N;i++){ // man:=odd, work:=even
        int in;cin>>in;
        int tmp=i*2-1;
        while(in--){
            int m;cin>>m;
            m=m*2;
            adj_list[m].push_back(tmp);

            adj_list[tmp].push_back(m);
            c[tmp][m]=1;
        }
        adj_list[0].push_back(tmp);
        c[0][tmp]=1; //start point is 0

        adj_list[0].push_back(2001);
        c[0][2001]=K;

        adj_list[2001].push_back(tmp);
        adj_list[tmp].push_back(2001);
        c[2001][tmp]=K;
    }
    
    for(int i=1;i<=M;i++){
        adj_list[i*2].push_back(3000);
        c[i*2][3000]=1;
    }
    int answer=0;
    while(1){
        vector<int> P(3001,-1); // parent for backtracking
        queue<int> q;

        q.push(0); //find only way to end point
        [&](){
            while(!q.empty()){
                int curx=q.front();
                q.pop();
                for(int i=0;i<adj_list[curx].size();i++){
                    int nx=adj_list[curx][i];
                    if(P[nx]!=-1)continue;
                    if(c[curx][nx]-f[curx][nx]==0)continue;
                    P[nx]=curx; //marking
                    q.push(nx);
                    if(nx==3000)return;//found it!
                }
            }
        }();

        if(P[3000]==-1)break; //fail!

        //backtracking to find minflow
        int minflow=2'000'000'000;
        for(int i=3000;i!=0;i=P[i]) minflow=min(minflow,c[P[i]][i]-f[P[i]][i]);
        //backtracking to marking flow
        for(int i=3000;i!=0;i=P[i]){
            f[P[i]][i]+=minflow;
            f[i][P[i]]-=minflow;
        }
        answer+=minflow;
    }
    cout<<answer;
}