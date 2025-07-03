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
int count_arr[1'000'001];
int count_ind_arr[1'000'001];
int arr[1'000'001];
pair<int,int> answer_arr[1'000'001];
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
    int answer=0;

    int ind=0;
    for(int i=0;i<N;i++){
        int in;
        cin>>in;
        arr[i]=in;
        count_arr[in]++;
        count_ind_arr[count_arr[in]-1]--;
        count_ind_arr[count_arr[in]]++;
        if(answer<count_arr[in]){
            answer=count_arr[in];
            ind=in;
        }
    }
    cin>>Q;
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
            count_ind_arr[count_arr[arr[ind1]]+1]--;
            count_ind_arr[count_arr[arr[ind1]]]++;
            if(answer==count_arr[arr[ind1]]+1 and count_ind_arr[count_arr[arr[ind1]]+1]==0){
                answer--;
                ind=arr[ind1];
            }
            else if(answer==count_arr[arr[ind1]]+1){
                for(int i=ind1;i<=ind2;i++)if(count_arr[arr[i]]==answer){
                    ind=arr[i];
                    break;
                }
            }
            ind1++;
        }
        while(e.s<ind1){
            ind1--;
            count_arr[arr[ind1]]++;
            count_ind_arr[count_arr[arr[ind1]]-1]--;
            count_ind_arr[count_arr[arr[ind1]]]++;
            if(answer<count_arr[arr[ind1]]){
                answer=count_arr[arr[ind1]];
                ind=arr[ind1];
            }
        }
        while(ind2<e.e){
            ind2++;
            count_arr[arr[ind2]]++;
            count_ind_arr[count_arr[arr[ind2]]-1]--;
            count_ind_arr[count_arr[arr[ind2]]]++;
            if(answer<count_arr[arr[ind2]]){
                answer=count_arr[arr[ind2]];
                ind=arr[ind2];
            }
            
        }
        while(e.e<ind2){
            count_arr[arr[ind2]]--;
            count_ind_arr[count_arr[arr[ind2]]+1]--;
            count_ind_arr[count_arr[arr[ind2]]]++;
            if(answer==count_arr[arr[ind2]]+1 and count_ind_arr[count_arr[arr[ind2]]+1]==0){
                answer--;
                ind=arr[ind2];
            }
            else if(answer==count_arr[arr[ind2]]+1){
                for(int i=ind1;i<=ind2;i++)if(count_arr[arr[i]]==answer){
                    ind=arr[i];
                    break;
                }
            }
            ind2--;
        }
        // cout<<answer<<"\n";
        answer_arr[e.i]={answer*2-(ind2-ind1+1),ind};
        // cout<<ind1<<" "<<ind2<<"\n";
        // for(int i=0;i<N;i++)cout<<count_arr[i]<<" ";
        // for(int i=0;i<N;i++)cout<<count_ind_arr[i]<<" ";
        // cout<<"\n";
    }
    for(int i=0;i<Q;i++){
        if(answer_arr[i].first>0)cout<<"yes "<<answer_arr[i].second<<"\n";
        else cout<<"no\n";
    }
}