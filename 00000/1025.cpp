#include<iostream>
#include<cmath>
using namespace std;
int arr[9][9];
int is_square(int x){
    if(x==1)return 1;
    int tmp=x/sqrt(x);
    return (x/tmp*sqrt(x)==x?x:-1);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;cin>>N>>M;
    int maxnum=-1;
    for(int i=0;i<N;i++)for(int j=0;j<M;j++){
        char c;cin>>c;
        arr[i][j]=c-'0';
    }
    // cout<<is_square(6)<<"\n";
    for(int id=-max(N,M);id<=max(N,M);id++)for(int d=-max(N,M);d<=max(N,M);d++){
        if(d==0 and id==0)continue;
        for(int i=0;i<N;i++)for(int j=0;j<M;j++){
            int tmp=0;
            for(int ii=i,jj=j;ii<N and ii>=0 and jj<M and jj>=0;ii+=id,jj+=d){
                tmp*=10;
                tmp+=arr[ii][jj];
                maxnum=max(maxnum,is_square(tmp));
                // cout<<tmp<<"\n";
            }
        }
    }
    cout<<maxnum;
}