#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int N, evenN;
vector<int> arr[400001];
int last_ans=0;
void solve(void){
    int i,j,k;
    cin>>i>>j>>k;
    k--;
    int lower=-1'000'000'001;
    int upper=1'000'000'001;
    while(lower+1!=upper){
        int mid=(lower+upper)/2;
        int lanswer=0;
        int ind1=(1<<evenN)+i-1;
        int ind2=(1<<evenN)+j-1;
        while(ind1<=ind2){
            if(ind1%2==1){
                lanswer+=lower_bound(arr[ind1].begin(),arr[ind1].end(),mid)-arr[ind1].begin();
            }
            if(ind2%2==0){
                lanswer+=lower_bound(arr[ind2].begin(),arr[ind2].end(),mid)-arr[ind2].begin();
            }
            ind1=(ind1+1)/2;
            ind2=(ind2-1)/2;
        }
        if(k<lanswer)upper=mid;
        else lower=mid;
    }
    cout<<lower<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    int T;
    cin>>T;
    if(N==1)evenN=0;
    else evenN=log2(N-1)+1;

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
    //for(int i=0;i<arr[1].size();i++)cout<<arr[1][i]<<" ";
    while(T--)solve();
}