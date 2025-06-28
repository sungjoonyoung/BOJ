#include<iostream>
#include<cmath>
#include<utility>
using namespace std;
int N,evenN;
long long arr_sum[300'000];
pair<int,int> arr_min[300'000];
void tree_init(void){
    for(int h=(1<<evenN)/2;h>0;h/=2){
        for(int i=h;i<h*2;i++){
            arr_sum[i]=arr_sum[i*2]+arr_sum[i*2+1];
            if(arr_min[i*2]<=arr_min[i*2+1])arr_min[i]=arr_min[i*2];
            else arr_min[i]=arr_min[i*2+1];
        }
    }
}
long long DFS(int s,int e){
    if(s>e)return 0;
    long long answer=0;
    pair<int,int> minnum={1'000'001,0};
    int ind1=(1<<evenN)+s;
    int ind2=(1<<evenN)+e;
    while(ind1<=ind2){
        if(ind1%2==1){
            answer+=arr_sum[ind1];
            if(arr_min[ind1].first<minnum.first)minnum=arr_min[ind1];
        }
        if(ind2%2==0){
            answer+=arr_sum[ind2];
            if(arr_min[ind2].first<minnum.first)minnum=arr_min[ind2];
        }
        ind1=(ind1+1)/2;
        ind2=(ind2-1)/2;
    }
    answer*=minnum.first;
    return max(answer,max(DFS(s,minnum.second-1),DFS(minnum.second+1,e)));
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    evenN=(N==1)?0:(log2(N-1)+1);
    for(int i=0;i<N;i++){
        int in;
        cin>>in;
        arr_sum[(1<<evenN)+i]=in;
        arr_min[(1<<evenN)+i]={in,i};
    }
    tree_init();
    cout<<DFS(0,N-1);
}