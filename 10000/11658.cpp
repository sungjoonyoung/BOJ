#include<iostream>
#include<cmath>
using namespace std;
long long arr[5000][1025];
int o_arr[1025][1025];
int N,M,evenN;
void update_func(void){
    long long x,y,c;
    cin>>x>>y>>c;
    x--;
    long long discount=c-o_arr[x][y];
    o_arr[x][y]=c;
    for(int i=y;i<=N;i++){
        //arr[(1<<evenN)+x][i]+=discount;
        
        for(int h=(1<<evenN)+x;h>0;h/=2)arr[h][i]+=discount;
    }

}
void sum_func(void){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    x1--;x2--;
    long long answer=0;
    
    int ind1=(1<<evenN)+x1;
    int ind2=(1<<evenN)+x2;
    while(ind1<=ind2){
        if(ind1%2==1)answer+=arr[ind1][y2];
        if(ind2%2==0)answer+=arr[ind2][y2];
        ind1=(ind1+1)/2;
        ind2=(ind2-1)/2;
    }

    ind1=(1<<evenN)+x1;
    ind2=(1<<evenN)+x2;
    while(ind1<=ind2){
        if(ind1%2==1)answer-=arr[ind1][y1-1];
        if(ind2%2==0)answer-=arr[ind2][y1-1];
        ind1=(ind1+1)/2;
        ind2=(ind2-1)/2;
    }

    cout<<answer<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N>>M;
    evenN=(1==N)?0:(log2(N-1)+1);
    for(int i=0;i<N;i++)for(int j=1;j<=N;j++){
        cin>>arr[(1<<evenN)+i][j];
        o_arr[i][j]=arr[(1<<evenN)+i][j];
        arr[(1<<evenN)+i][j]+=arr[(1<<evenN)+i][j-1];
    }
    for(int i=1;i<=N;i++){
        for(int h=(1<<evenN)/2;h>0;h/=2)for(int j=h;j<h*2;j++)arr[j][i]=arr[j*2][i]+arr[j*2+1][i];
    }
    while(M--){
        int w;
        cin>>w;
        if(w==0)update_func();
        else sum_func();
    }
}