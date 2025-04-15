#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> v;
vector<vector<int>> answer;
vector<int> s;
int p[100001];
bool fix[100001];
int ind=1;
int DFS(int x);
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int V,E;
    cin>>V>>E;
    v.resize(V+1);
    for(int i=0;i<E;i++){
        int s,e;
        cin>>s>>e;
        v[s].push_back(e);
    }
    for(int i=1;i<=V;i++)if(!p[i])DFS(i);
    cout<<answer.size()<<"\n";
    sort(answer.begin(),answer.end());
    for(int i=0;i<answer.size();i++){
        for(int j=0;j<answer[i].size();j++)cout<<answer[i][j]<<" ";
        cout<<"-1\n";
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
        answer.push_back(vector<int>());
        while(s.back()!=x){
            answer.back().push_back(s.back());
            fix[s.back()]=1;
            s.pop_back();
        }
        answer.back().push_back(s.back());
        fix[s.back()]=1;
        s.pop_back();
        sort(answer.back().begin(),answer.back().end());
    }
    return pnum;
}
//from https://blog.naver.com/jihwanmoon0319/223062637304