#include<iostream>
#include<cmath>
using namespace std;
int lazy[2'000'000];
int arr[2'000'000];
int N,evenN;
void updatefunc_DFS(int ind,int h,int s,int e,int k){
    if(h>evenN)return;
    int ns=(ind<<(evenN-h));
    int ne=((ind+1)<<(evenN-h))-1;
    if(lazy[ind]){
        if((min((1<<evenN)+N-1,ne)-ns+1)%2)arr[ind]^=lazy[ind];
        if(h<evenN){
            lazy[ind*2]^=lazy[ind];
            lazy[ind*2+1]^=lazy[ind];
        }
        lazy[ind]^=lazy[ind];
    }
    if(ne<s or e<ns)return;
    if(s<=ns and ne<=e)lazy[ind]^=k;
    else {
        if((min(e,ne)-max(s,ns)+1)%2)arr[ind]^=k;
        updatefunc_DFS(ind*2,h+1,s,e,k);
        updatefunc_DFS(ind*2+1,h+1,s,e,k);
    }
}
void updatefunc(void){
    int s,e,k;
    cin>>s>>e>>k;
    s=(1<<evenN)+s;
    e=(1<<evenN)+e;
    updatefunc_DFS(1,0,s,e,k);
}
int showfunc_DFS(int ind,int h,int s,int e){
    if(h>evenN)return 0;
    int ns=(ind<<(evenN-h));
    int ne=((ind+1)<<(evenN-h))-1;
    if(lazy[ind]){
        if((min((1<<evenN)+N-1,ne)-ns+1)%2)arr[ind]^=lazy[ind];
        if(h<evenN){
            lazy[ind*2]^=lazy[ind];
            lazy[ind*2+1]^=lazy[ind];
        }
        lazy[ind]^=lazy[ind];
    }
    if(ne<s or e<ns)return 0;
    if(s<=ns and ne<=e)return arr[ind];
    else {
        if((min(e,ne)-max(s,ns)+1)%2)arr[ind]^=lazy[ind];
        return showfunc_DFS(ind*2,h+1,s,e)^showfunc_DFS(ind*2+1,h+1,s,e);
    }
}
void showfunc(void){
    int s,e,k;
    cin>>s>>e;
    s=(1<<evenN)+s;
    e=(1<<evenN)+e;
    cout<<showfunc_DFS(1,0,s,e)<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    evenN=(N==1)?0:(log2(N-1)+1);
    for(int i=0;i<N;i++)cin>>arr[(1<<evenN)+i];
    for(int h=(1<<evenN)/2;h>0;h/=2)for(int i=h;i<h*2;i++)arr[i]=arr[i*2]^arr[i*2+1];
    int T;
    cin>>T;
    while(T--){
        int op;
        cin>>op;
        if(op==1)updatefunc();
        else showfunc();
    }
}