#include<iostream>
#include<cmath>
using namespace std;
int Aarr[1'000'001];
int Barr[1'000'001];
long long arr[2'000'000];
int N,evenN;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    evenN=(N==1)?0:(log2(N-1)+1);
    for(int i=0;i<N;i++)cin>>Aarr[i];
    for(int i=0;i<N;i++){int in;cin>>in;Barr[in]=i;}
    long long answer=0;
    for(int i=0;i<N;i++){
        int s=Barr[Aarr[i]];
        int ind1=(1<<evenN)+s;
        int ind2=(1<<evenN)+N-1;
        while(ind1<=ind2){
            if(ind1%2==1)answer+=arr[ind1];
            if(ind2%2==0)answer+=arr[ind2];
            ind1=(ind1+1)/2;
            ind2=(ind2-1)/2;
        }
        s=(1<<evenN)+s;
        for(;s>0;s/=2)arr[s]++;
    }
    cout<<answer;
}