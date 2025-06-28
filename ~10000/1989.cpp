#include<iostream>
#include<utility>
#include<vector>
#include<cmath>
using namespace std;
long long sum_arr[500'000];
pair<int,int> min_arr[500'000];
int N,evenN;
long long maxnum=-1;
int maxind1,maxind2;
void DFS(int s,int e){
    if(e<s)return;
    long long answer=0;
    pair<int,int> min_pair={1'000'001,0};
    int ind1=(1<<evenN)+s;
    int ind2=(1<<evenN)+e;
    while(ind1<=ind2){
        if(ind1%2==1){
            answer+=sum_arr[ind1];
            if(min_pair.first>min_arr[ind1].first)min_pair=min_arr[ind1];
        }
        if(ind2%2==0){
            answer+=sum_arr[ind2];
            if(min_pair.first>min_arr[ind2].first)min_pair=min_arr[ind2];
        }
        ind1=(ind1+1)/2;
        ind2=(ind2-1)/2;
    }
    answer*=min_pair.first;
    if(answer>maxnum){
        maxnum=answer;
        maxind1=s;
        maxind2=e;
    }
    DFS(s,min_pair.second-1);
    DFS(min_pair.second+1,e);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    evenN=(N==1)?0:(log2(N-1)+1);
    for(int i=0;i<N;i++){
        int in;
        cin>>in;
        sum_arr[(1<<evenN)+i]=in;
        min_arr[(1<<evenN)+i]={in,i};
    }
    for(int h=(1<<evenN)/2;h>0;h/=2)for(int i=h;i<h*2;i++){
        sum_arr[i]=sum_arr[i*2]+sum_arr[i*2+1];
        if(min_arr[i*2].first<=min_arr[i*2+1].first)min_arr[i]=min_arr[i*2];
        else min_arr[i]=min_arr[i*2+1];
    } 
    DFS(0,N-1);
    cout<<maxnum<<"\n"<<maxind1+1<<" "<<maxind2+1;
}