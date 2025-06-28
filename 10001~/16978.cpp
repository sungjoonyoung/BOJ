#include<iostream>
#include<vector>
#include<cmath>
#include<utility>
#include<algorithm>
using namespace std;
long long arr[300001];
typedef struct{
    int k,i,j,o;
}twoq;
vector<twoq> twov;
vector<pair<int,int>> onev;
vector<long long> answer;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,evenN;
    cin>>N;

    evenN=(N==1)?0:(log2(N-1)+1);
    for(int i=0;i<N;i++)cin>>arr[(1<<evenN)+i];
    int Q;
    cin>>Q;
    while(Q--){
        int op;
        cin>>op;
        if(op==1){
            int x,y;
            cin>>x>>y;
            onev.push_back({--x,y});
        }
        else{
            int k,i,j;
            cin>>k>>i>>j;
            twov.push_back({k,--i,--j,twov.size()});
        }
    }

    for(int h=(1<<evenN)/2;h>0;h/=2){
        for(int i=h;i<h*2;i++)arr[i]=arr[i*2]+arr[i*2+1];
    }
    sort(twov.begin(),twov.end(),[](twoq x, twoq y){return x.k<y.k;});
    answer.resize(twov.size());

    int j=0;
    for(int i=0;i<twov.size();i++){
        for(;j<twov[i].k and j<onev.size();j++){
            int t=(1<<evenN)+onev[j].first;
            arr[t]=onev[j].second;
            for(t=t/2;t>0;t/=2)arr[t]=arr[t*2]+arr[t*2+1];
        }
        long long item=0;
        int ind1=(1<<evenN)+twov[i].i;
        int ind2=(1<<evenN)+twov[i].j;
        while(ind1<=ind2){
            if(ind1%2==1)item+=arr[ind1];
            if(ind2%2==0)item+=arr[ind2];
            ind1=(ind1+1)/2;
            ind2=(ind2-1)/2;
        }
        answer[twov[i].o]=item;
    }

    for(int i=0;i<answer.size();i++)cout<<answer[i]<<"\n";
}