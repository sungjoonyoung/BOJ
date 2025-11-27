#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<queue>
using namespace std;
vector<int> v[200'001];
vector<int> s;
int p[200'001];
bool fix[200'001];
int ind=1;
int N=0;
int DFS(int x);
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ind=1;
    int V,E,X; 
    cin>>V>>E>>X;
    for(int i=0;i<E;i++){
        int s,e;
        cin>>s>>e;
        v[s].push_back(e);
    }
    for(int i=1;i<=V;i++)if(!p[i])DFS(i);

    // cout<<N<<"\n";

    queue<int> q;
    q.push(X);
    vector<bool> vst(V+1,0);
    vector<bool> pst(V+1,0);
    vst[X]=1;
    while(!q.empty()){
        int curx=q.front();
        // cout<<curx<<"\n";
        if(pst[p[curx]]==0){
            pst[p[curx]]=1;
            N--;
        }
        q.pop();
        for(int i=0;i<v[curx].size();i++){
            if(vst[v[curx][i]])continue;
            q.push(v[curx][i]);
            vst[v[curx][i]]=1;
        }
    }
    
    cout<<N;
}
int DFS(int x){
    p[x]=ind;
    int pnum=ind;
    s.push_back(x);
    ind++;
    for(int i=0;i<v[x].size();i++){
        if(!p[v[x][i]])pnum=min(pnum,DFS(v[x][i]));
        else if(!fix[v[x][i]])pnum=min(pnum,p[v[x][i]]);
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
        N++;
    }
    return pnum;
}