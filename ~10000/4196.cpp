#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
vector<vector<int>> v;
vector<int> s;
vector<pair<int,int>> edgev;
int countarr[100001];
int p[100001];
bool fix[100001];
int ind=1;
int DFS(int x);
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        for(int i=0;i<v.size();i++)v[i].clear();
        v.clear();
        edgev.clear();
        s.clear();
        for(int i=0;i<100001;i++)countarr[i]=p[i]=fix[i]=0;


        ind=1;
        int V,E;
        cin>>V>>E;
        v.resize(V+1);
        for(int i=0;i<E;i++){
            int s,e;
            cin>>s>>e;
            v[s].push_back(e);
            edgev.push_back({s,e});
        }
        for(int i=1;i<=V;i++)if(!p[i])DFS(i);
        for(int i=0;i<E;i++){
            int s=p[edgev[i].first];
            int e=p[edgev[i].second];
            if(p[s]==p[e])continue;
            countarr[p[e]]++;
        }
        //cout<<answer.size()<<" ";
        //for(int i=1;i<=V;i++)cout<<p[i]<<" ";
        int c=0;
        for(int i=1;i<=V;i++)if(p[i]==i and countarr[p[i]]==0)c++;
        cout<<c<<"\n";
    }
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
    }
    return pnum;
}