#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<int> answer;
int arr[500'000];
int N,evenN,K,many;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N>>K;
    evenN=(N==1)?0:(log2(N-1)+1);
    for(int i=0;i<N;i++)arr[(1<<evenN)+i]++;
    answer.push_back(K-1);
    arr[(1<<evenN)+K-1]--;
    int ind=K-1;
    many=N;
    many--;
    for(int h=(1<<evenN)/2;h>0;h/=2)for(int i=h;i<h*2;i++)arr[i]=arr[i*2]+arr[i*2+1];
    while(many){
        int r=0;
        int ind1=(1<<evenN)+ind;
        int ind2=(1<<evenN)+N-1;
        while(ind1<=ind2){
            if(ind1%2==1)r+=arr[ind1];
            if(ind2%2==0)r+=arr[ind2];
            ind1=(ind1+1)/2;
            ind2=(ind2-1)/2;
        }
        int step=K%many;
        if(step==0)step=many;
        

        if(step>r)step-=r;
        else step=many-r+step;
        int find_ind=1;
        for(int h=0;h<evenN;h++){
            if(arr[find_ind*2]>=step)find_ind=find_ind*2;
            else{
                step-=arr[find_ind*2];
                find_ind=find_ind*2+1;
            }
        }
        
        find_ind-=(1<<evenN);
        answer.push_back(find_ind);
        for(int i=(1<<evenN)+find_ind;i>0;i/=2)arr[i]--;
        ind=find_ind;
        many--;
    }
    cout<<"<";
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]+1;
        if(i!=answer.size()-1)cout<<", ";
    }
    cout<<">";
    //cout<<arr[(1<<evenN)+3];
}