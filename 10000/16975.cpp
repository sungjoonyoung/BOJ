#include<iostream>
#include<cmath>
using namespace std;
long long arr[300'000];
long long lazy[300'000];
int N,evenN,degree;

int many(int x,int h){
    return min(degree+N,(x+1)<<(evenN-h))-(x<<(evenN-h));
}
void lazy_update(int x,int h){
    if(lazy[x]){
        arr[x]+=many(x,h)*lazy[x];
        if(x*2<(degree)*2)lazy[x*2]+=lazy[x];
        if(x*2+1<(degree)*2)lazy[x*2+1]+=lazy[x];
        lazy[x]=0;
    }
}

void update_DFS(int x,int h,int l,int r,int k){
    lazy_update(x,h);
    int ind1=(x<<(evenN-h));
    int ind2=((x+1)<<(evenN-h))-1;
    if(ind2<l or r<ind1)return;
    if(l<=ind1 and ind2<=r)lazy[x]+=k;
    else{
        arr[x]+=(min(r,ind2)-max(ind1,l)+1)*k;//여집합
        if(x*2<degree+N)update_DFS(x*2,h+1,l,r,k);
        if(x*2+1<degree+N)update_DFS(x*2+1,h+1,l,r,k);
    }
}
void update_func(void){
    int i,j,k;
    cin>>i>>j>>k;
    i--;j--;
    update_DFS(1,0,degree+i,degree+j,k);
}

void print_DFS(int x,int h,int l,int r){//cover range, target range
    lazy_update(x,h);
    int ind1=(x<<(evenN-h)); // cover range
    int ind2=((x+1)<<(evenN-h))-1;
    if(ind2<l or r<ind1) return;
    if(l<=ind1 and ind2<=r){
        cout<<arr[x]<<"\n";
        return;
    }
    else{
        if(x*2<degree+N)print_DFS(x*2,h+1,l,r);
        if(x*2+1<degree+N)print_DFS(x*2+1,h+1,l,r);
    }
}
void print_func(void){
    int x;cin>>x;x--;
    print_DFS(1,0,degree+x,degree+x);
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    evenN=(N==1)?0:(log2(N-1)+1);
    degree=(1<<evenN);
    for(int i=0;i<N;i++)cin>>arr[degree+i];
    for(int h=degree/2;h>0;h/=2)for(int i=h;i<h*2;i++)arr[i]=arr[i*2]+arr[i*2+1];
    int Q;cin>>Q;
    while(Q--){
        int op;cin>>op;
        if(op==1)update_func();
        else print_func();
    }
}