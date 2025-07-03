#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
typedef struct{
    int s,e,i;
}element;
int N,sqN;
long long count_arr[1'000'001];
int arr[1'000'001];
long long answer_arr[1'000'001];
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
    long long answer=0;
    for(int i=0;i<N;i++){
        int in;
        cin>>in;
        arr[i]=in;
        count_arr[in]++;
        answer-=(count_arr[in]-1)*(count_arr[in]-1)*in;
        answer+=(count_arr[in])*(count_arr[in])*in;
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
            answer-=(count_arr[arr[ind1]]+1)*(count_arr[arr[ind1]]+1)*arr[ind1];
            answer+=(count_arr[arr[ind1]])*(count_arr[arr[ind1]])*arr[ind1];

            ind1++;
        }
        while(e.s<ind1){
            ind1--;
            count_arr[arr[ind1]]++;
            answer-=(count_arr[arr[ind1]]-1)*(count_arr[arr[ind1]]-1)*arr[ind1];
            answer+=(count_arr[arr[ind1]])*(count_arr[arr[ind1]])*arr[ind1];
        }
        while(ind2<e.e){
            ind2++;
            count_arr[arr[ind2]]++;
            answer-=(count_arr[arr[ind2]]-1)*(count_arr[arr[ind2]]-1)*arr[ind2];
            answer+=(count_arr[arr[ind2]])*(count_arr[arr[ind2]])*arr[ind2];
        }
        while(e.e<ind2){
            count_arr[arr[ind2]]--;
            answer-=(count_arr[arr[ind2]]+1)*(count_arr[arr[ind2]]+1)*arr[ind2];
            answer+=(count_arr[arr[ind2]])*(count_arr[arr[ind2]])*arr[ind2];
            ind2--;
        }
        answer_arr[e.i]=answer;
    }
    for(int i=0;i<Q;i++)cout<<answer_arr[i]<<"\n";
}