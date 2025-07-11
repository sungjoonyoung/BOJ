#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int N, evenN;
vector<int> arr[400001];
void solve(void){
    int i,j,k;
    cin>>i>>j>>k;
    int answer=0;
    int ind1=(1<<evenN)+i-1;
    int ind2=(1<<evenN)+j-1;
    while(ind1<=ind2){
        // cout<<(upper_bound(arr[ind1].begin(),arr[ind1].end(),k)-arr[ind1].begin());
        // break;
        if(ind1%2==1)answer+=arr[ind1].size()-(upper_bound(arr[ind1].begin(),arr[ind1].end(),k)-arr[ind1].begin());
        if(ind2%2==0)answer+=arr[ind2].size()-(upper_bound(arr[ind2].begin(),arr[ind2].end(),k)-arr[ind2].begin());
        ind1=(ind1+1)/2;
        ind2=(ind2-1)/2;
    }
    cout<<answer<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    if(N==1)evenN=0;
    else evenN=log2(N-1)+1;

    for(int i=0;i<(1<<evenN);i++){
        if(i<N){
            int in;
            cin>>in;
            arr[(1<<evenN)+i].push_back(in);
        }
        else arr[(1<<evenN)+i].push_back(-1);
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
    //for(int i=0;i<arr[1].size();i++)cout<<arr[1][i]<<" ";
    int T;
    cin>>T;
    while(T--)solve();
}