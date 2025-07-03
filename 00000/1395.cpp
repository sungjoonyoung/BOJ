#include<iostream>
#include<cmath>
using namespace std;
int lazy[2'000'000];
int arr[2'000'000];
int N,evenN;
int updatefunc_DFS(int ind,int h,int s,int e){
    int ns=(ind<<(evenN-h));
    int ne=((ind+1)<<(evenN-h))-1;
    if(lazy[ind]){
        arr[ind]=(min((1<<evenN)+N-1,ne)-ns+1)-arr[ind];
        if(h<evenN){
            lazy[ind*2]^=1;
            lazy[ind*2+1]^=1;
        }
        lazy[ind]^=1;
    }
    if(ne<s or e<ns)return arr[ind];
    if(s<=ns and ne<=e){
        lazy[ind]^=1;
        if(lazy[ind])return (min((1<<evenN)+N-1,ne)-ns+1)-arr[ind];
        else return arr[ind];
    }
    else {
        if(h==evenN)return arr[ind];

        int l=updatefunc_DFS(ind*2,h+1,s,e);
        int r=updatefunc_DFS(ind*2+1,h+1,s,e);
        return arr[ind]=l+r;
    }
}
void updatefunc(void){
    int s,e;
    cin>>s>>e;
    s--;e--;
    s=(1<<evenN)+s;
    e=(1<<evenN)+e;
    updatefunc_DFS(1,0,s,e);
}
int showfunc_DFS(int ind,int h,int s,int e){
    if(h>evenN)return 0;
    int ns=(ind<<(evenN-h));
    int ne=((ind+1)<<(evenN-h))-1;
    if(lazy[ind]){
        arr[ind]=(min((1<<evenN)+N-1,ne)-ns+1)-arr[ind];
        if(h<evenN){
            lazy[ind*2]^=1;
            lazy[ind*2+1]^=1;
        }
        lazy[ind]^=1;
    }
    if(ne<s or e<ns)return 0;
    if(s<=ns and ne<=e)return arr[ind];
    else {
        return showfunc_DFS(ind*2,h+1,s,e)+showfunc_DFS(ind*2+1,h+1,s,e);
    }
}
void showfunc(void){
    int s,e,k;
    cin>>s>>e;
    s--;e--;
    s=(1<<evenN)+s;
    e=(1<<evenN)+e;
    cout<<showfunc_DFS(1,0,s,e)<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>N>>T;
    evenN=(N==1)?0:(log2(N-1)+1);
    //for(int i=(1<<evenN);i<(1<<evenN)+N;i++)arr[i]++;
    //for(int h=(1<<evenN)/2;h>0;h/=2)for(int i=h;i<h*2;i++)arr[i]=arr[i*2]+arr[i*2+1];
    // cout<<arr[1];
    while(T--){
        int op;
        cin>>op;
        if(op==0)updatefunc();
        else showfunc();
    }
}