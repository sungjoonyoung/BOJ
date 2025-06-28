#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int ind[100'001];
void solve(void){
    int N,evenN,M;
    vector<int> arr(800'000,0);
    cin>>N>>M;
    evenN=(N==1)?0:(log2(100'000-1)+1);
    evenN++;
    for(int i=0;i<N;i++)arr[(1<<evenN)+i]++;
    for(int i=0;i<N;i++)ind[i]=N-1-i;
    for(int h=(1<<evenN)/2;h>0;h/=2){
        for(int i=h;i<h*2;i++)arr[i]=arr[i*2]+arr[i*2+1];
    }
    //cout<<arr[1]<<"A";
    while(M--){
        int in;cin>>in;in--;
        int answer=0;
        int ind1=(1<<evenN)+ind[in];
        int ind2=(1<<evenN)+N-1;
        while(ind1<=ind2){
            if(ind1%2==1)answer+=arr[ind1];
            if(ind2%2==0)answer+=arr[ind2];
            ind1=(ind1+1)/2;
            ind2=(ind2-1)/2;
        }
        cout<<answer-1<<" ";
        for(int i=(1<<evenN)+ind[in];i>0;i/=2)arr[i]--;
        for(int i=(1<<evenN)+N;i>0;i/=2)arr[i]++;
        ind[in]=N;
        N++;
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        solve();
        cout<<"\n";
    }
}