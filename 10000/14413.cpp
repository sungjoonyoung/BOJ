#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<utility>
using namespace std;
typedef struct{
    int s,e,i;
}element;
int N,sqN;
int count_arr[500'001];
int arr[500'001];
int answer_arr[500'001];
vector<element> v;
bool cmp(element x,element y){
    return (x.s/sqN==y.s/sqN)?(x.e<y.e):(x.s/sqN<y.s/sqN);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    int Q;
    cin>>Q;
    sqN=sqrt(N);
    vector<pair<int,int>> tmp;
    for(int i=0;i<N;i++){
        int in;
        cin>>in;
        tmp.push_back({in,i});
    }
    sort(tmp.begin(),tmp.end());
    
    long long answer=0;
    int ind=0;
    arr[tmp[0].second]=ind;
    for(int i=1;i<N;i++){
        if(tmp[i].first!=tmp[i-1].first)ind++;
        arr[tmp[i].second]=ind;
    }
    // for(int i=0;i<N;i++)cout<<arr[i]<<" ";
    // cout<<"\n";

    for(int i=0;i<N;i++){
        count_arr[arr[i]]++;
        if(count_arr[arr[i]]==2)answer++;
        if(count_arr[arr[i]]==3)answer--;
    }




    
    for(int i=0;i<Q;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({--x,--y,i});
    }
    sort(v.begin(),v.end(),cmp);


    int ind1=0;
    int ind2=N-1;
    for(auto e:v){
        while(ind1<e.s){
            count_arr[arr[ind1]]--;
            if(count_arr[arr[ind1]]==1)answer--;
            if(count_arr[arr[ind1]]==2)answer++;
            ind1++;
        }
        while(e.s<ind1){
            ind1--;
            count_arr[arr[ind1]]++;
            if(count_arr[arr[ind1]]==3)answer--;
            if(count_arr[arr[ind1]]==2)answer++;
        }
        while(ind2<e.e){
            ind2++;
            count_arr[arr[ind2]]++;
            if(count_arr[arr[ind2]]==3)answer--;
            if(count_arr[arr[ind2]]==2)answer++;
        }
        while(e.e<ind2){
            count_arr[arr[ind2]]--;
            if(count_arr[arr[ind2]]==1)answer--;
            if(count_arr[arr[ind2]]==2)answer++;
            ind2--;
        }
        answer_arr[e.i]=answer;
    }
    for(int i=0;i<Q;i++)cout<<answer_arr[i]<<"\n";
}