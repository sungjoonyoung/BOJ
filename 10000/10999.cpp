#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int N,evenN,M,K;
long long arr[3'000'000];
long long lazy[3'000'000];
int many[3'000'000];

void update_lazy(int s){
    if(lazy[s]==0)return;
    arr[s]+=lazy[s]*many[s];
    if(s*2<(1ull<<(evenN+1))){
        lazy[s*2]+=lazy[s];
        lazy[s*2+1]+=lazy[s];
    }
    lazy[s]=0;
}

void setting_DFS(int ind1,int h,int s,int e,long long n){   
    update_lazy(ind1);
    int ns=(ind1<<(evenN-h));
    int ne=((ind1+1)<<(evenN-h))-1;
    if(ne<s or e<ns)return;  
    if(s<=ns and ne<=e)lazy[ind1]+=n;
    else {
        arr[ind1]+=n*(min(e,ne)-max(s,ns)+1);
        setting_DFS(ind1*2,h+1,s,e,n);
        setting_DFS(ind1*2+1,h+1,s,e,n);
    }
}
void setting(void){
    int s,e;
    long long n;
    cin>>s>>e>>n;
    s=(1<<evenN)+s-1;
    e=(1<<evenN)+e-1;
    setting_DFS(1,0,s,e,n);
}

long long DFS(int ind1,int h,int s,int e){
    update_lazy(ind1);
    int ns=(ind1<<(evenN-h));
    int ne=((ind1+1)<<(evenN-h))-1;
    if(ne<s or e<ns)return 0;
    if(s<=ns and ne<=e)return arr[ind1];
    return DFS(ind1*2,h+1,s,e)+DFS(ind1*2+1,h+1,s,e);
}
void findf(void){
    vector<int> stack;
    int s,e;
    cin>>s>>e;
    s=(1<<evenN)+s-1;
    e=(1<<evenN)+e-1;
    cout<<DFS(1,0,s,e)<<"\n";
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N>>M>>K;
    evenN=(N==1)?0:(log2(N-1)+1);
    for(int i=0;i<N;i++){
        cin>>arr[(1ull<<evenN)+i];
        many[(1ull<<evenN)+i]++;
    }
    for(int h=(1<<evenN)/2;h>0;h/=2)for(int i=h;i<h*2;i++){
        arr[i]=arr[i*2]+arr[i*2+1];
        many[i]=many[i*2]+many[i*2+1];
    }
    for(int i=0;i<M+K;i++){
        int op;
        cin>>op;
        if(op==1)setting();
        else findf();
    }
}