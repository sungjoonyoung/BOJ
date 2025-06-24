#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> R;
vector<int> B;
int P[4'000'002];
int N,M,K;
void infunc(void);
void solve(void);
int find(int x){
    if(x==P[x])return x;
    return P[x]=find(P[x]);
}
void uni(int x,int y){
    int px=find(x);
    int py=find(y);
    if(py>px)P[px]=py;
    else P[py]=px;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N>>M>>K;
    infunc();
    for(int i=1;i<=4'000'002;i++)P[i]=i;
    //for(auto c:R)cout<<c<<" ";
    solve();
}
void solve(void){
    for(int i=0;i<B.size();i++){
        int s=0;
        int e=M+1;
        int mid=(s+e)/2;
        while(s+1!=e){
            if(R[mid]<=B[i])s=mid;
            else e=mid;
            mid=(s+e)/2;
        }
        //cout<<mid<<"A\n";
        e=find(e);
        cout<<R[e]<<"\n";
        uni(e,e+1);
    }
}
void infunc(void){
    R.push_back(0);
    R.push_back(4'000'005);
    for(int i=0;i<M;i++){
        int in;
        cin>>in;
        R.push_back(in);
    }
    sort(R.begin(),R.end());
    for(int i=0;i<K;i++){
        int in;
        cin>>in;
        B.push_back(in);
    }
}