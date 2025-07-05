#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int P[200'001];
vector<pair<int,pair<int,int>>> Query_vector;
vector<string> answer;
int find(int x){
    if(x==P[x])return x;
    return P[x]=find(P[x]);
}
void _union(int x,int y){
    int px=find(x);
    int py=find(y);
    P[py]=px;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,Q;
    cin>>N>>Q;
    P[1]=1;
    for(int i=2;i<=N;i++){
        int in;
        cin>>in;
        P[i]=in;
    }
    for(int i=0;i<Q+(N-1);i++){
        int op,a,b;
        cin>>op;
        if(op==0){
            cin>>b;
            a=P[b];
            P[b]=b;
            Query_vector.push_back({0,{a,b}});
        }
        else{
            cin>>a>>b;
            Query_vector.push_back({1,{a,b}});
        }
    }
    for(int i=Query_vector.size()-1;i>=0;i--){
        int op=Query_vector[i].first;
        int a=Query_vector[i].second.first;
        int b=Query_vector[i].second.second;
        if(op){
            if(find(a)==find(b))answer.push_back("YES");
            else answer.push_back("NO");
        }
        else{
            _union(a,b);
        }
    }
    // for(int i=1;i<=N;i++)cout<<P[i]<<" ";
    // cout<<answer.size();
    for(int i=answer.size()-1;i>=0;i--)cout<<answer[i]<<"\n";
}