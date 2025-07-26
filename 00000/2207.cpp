#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
vector<int> s;
vector<int> adj[20'001];
int p[20'001];
bool fix[20'001];
int ind=1;
int DFS(int x){
    p[x]=ind;
    int pnum=ind;
    s.push_back(x);
    ind++;
    for(int i=0;i<adj[x].size();i++){
        if(!p[adj[x][i]])pnum=min(pnum,DFS(adj[x][i]));
        else if(!fix[adj[x][i]])pnum=min(pnum,p[adj[x][i]]);
    }
    if(p[x]==pnum){
        while(s.back()!=x){
            fix[s.back()]=1;
            p[s.back()]=x;
            s.pop_back();
        }
        fix[s.back()]=1;
        p[s.back()]=x;
        s.pop_back();
    }
    return pnum;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>M>>N;
    for(int i=0;i<M;i++){
        int x,y;
        cin>>x>>y;
        //false true
        if(x>0 and y>0){
            adj[abs(x)+N].push_back(abs(y)); //++
            adj[abs(y)+N].push_back(abs(x)); //++
        }
        else if(x<0 and y<0){
            adj[abs(x)].push_back(abs(y)+N);//--
            adj[abs(y)].push_back(abs(x)+N);//--
        }
        else if(x<0){
            adj[abs(x)].push_back(abs(y));//-+
            adj[abs(y)+N].push_back(abs(x)+N);//-+
        }
        else if(y<0){
            adj[abs(x)+N].push_back(abs(y)+N);//+-
            adj[abs(y)].push_back(abs(x));//+-
        }
    }
    // cout<<adj[1][0];
    for(int i=1;i<=N*2;i++)if(!p[i])DFS(i);
    // for(int i=1;i<=N*2;i++)cout<<p[i]<<" ";
    for(int i=1;i<=N;i++)if(p[i]==p[i+N]){cout<<"OTL";return 0;}
    cout<<"^_^";
}
