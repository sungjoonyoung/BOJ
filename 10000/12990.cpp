#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
vector<int> arr[2'000'000];
int N,evenN;

void setting_tree(void){
    for(int i=0;i<(1<<evenN);i++){
        if(i<N){
            int in;
            cin>>in;
            arr[(1<<evenN)+i].push_back(in);
        }
        else arr[(1<<evenN)+i].push_back(1'000'000'005);
    }
    for(int h=(1<<evenN)/2;h>0;h/=2){
        for(int i=h;i<h*2;i++){
            int ind0,ind1,ind2;
            ind0=ind1=ind2=0;
            arr[i].resize(arr[i*2].size()+arr[i*2+1].size());
            while(ind1<arr[i*2].size() and ind2<arr[i*2+1].size()){
                if(arr[i*2][ind1]<arr[i*2+1][ind2]){
                    arr[i][ind0++]=arr[i*2][ind1++];
                }
                else{
                    arr[i][ind0++]=arr[i*2+1][ind2++];
                }
            }
            for(;ind1<arr[i*2].size();ind1++){
                arr[i][ind0++]=arr[i*2][ind1];
            }
            for(;ind2<arr[i*2+1].size();ind2++){
                arr[i][ind0++]=arr[i*2+1][ind2];
            }
        }
    }
}
long long DFS(int i, int k){
    if(i>N) return 0;
    int key=arr[(1<<evenN)+i-1].front();
    long long sum=0;
    int ind1=(1<<evenN)+(i-1)*k+2-1;
    int ind2=(1<<evenN)+i*k+1-1;
    if((i-1)*k+2>N)return 0;
    if(i*k+1>N)ind2=(1<<evenN)+N-1;
    while(ind1<=ind2){
        if(ind1%2==1)sum+=lower_bound(arr[ind1].begin(),arr[ind1].end(),key)-arr[ind1].begin();
        if(ind2%2==0)sum+=lower_bound(arr[ind2].begin(),arr[ind2].end(),key)-arr[ind2].begin();
        ind1=(ind1+1)/2;
        ind2=(ind2-1)/2;
    }
    //if(key==4)cout<<sum<<" ";
    for(int j=0;j<k;j++){
        long long tmp=i-1;
        if((((tmp)*k+2+j)-1)*k+2>N)break;
        sum+=DFS((i-1)*k+2+j,k);
    }
    return sum;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int M,C;
    cin>>N;
    evenN=(N==1)?0:(log2(N-1)+1);
    setting_tree();
    for(int i=1;i<N;i++)cout<<DFS(1,i)<<" ";
}