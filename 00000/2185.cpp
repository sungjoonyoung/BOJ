#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int arr[200'000];
int count_arr[200'000];
int N,evenN;
typedef struct element{
    int x,y1,y2,op;
}element;
bool cmp(element a, element b){
    return (a.x!=b.x)?(a.x<b.x):(a.op>b.op);
}
vector<element> row_v,col_v;
void DFS(int ind,int h,int s,int e,int op){
    if(h>evenN)return;
    int ns=(ind<<(evenN-h));
    int ne=((ind+1)<<(evenN-h))-1;
    
    if(ne<s or e<ns)return;

    if(s<=ns and ne<e)arr[ind]+=op;
    else DFS(ind*2,h+1,s,e,op), DFS(ind*2+1,h+1,s,e,op);

    if(arr[ind])count_arr[ind]=ne-ns+1;
    else{
        if(ns==ne)count_arr[ind]=0;
        else count_arr[ind]=count_arr[ind*2]+count_arr[ind*2+1];
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    N=30'005;
    evenN=(log2(N-1)+1);
    int K;cin>>K;
    for(int i=0;i<K;i++){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1>x2)swap(x1,x2);
        if(y1>y2)swap(y1,y2);
        
        row_v.push_back({x1+10000,y1+10000,y2+10000,1});
        row_v.push_back({x2+10000,y1+10000,y2+10000,-1});
        col_v.push_back({y1+10000,x1+10000,x2+10000,1});
        col_v.push_back({y2+10000,x1+10000,x2+10000,-1});
    }
    sort(row_v.begin(),row_v.end(),cmp);
    sort(col_v.begin(),col_v.end(),cmp);


    long long answer=0;

    int before=0;
    for(int i=0;i<row_v.size();i++){
        element cur=row_v[i];
        int s=(1<<evenN)+cur.y1;
        int e=(1<<evenN)+cur.y2;
        DFS(1,0,s,e,cur.op);
        answer+=abs(count_arr[1]-before);
        before=count_arr[1];
    }

    for(int i=0;i<200'000;i++)count_arr[i]=arr[i]=0;
    before=0;
    for(int i=0;i<col_v.size();i++){
        element cur=col_v[i];
        int s=(1<<evenN)+cur.y1;
        int e=(1<<evenN)+cur.y2;
        DFS(1,0,s,e,cur.op);
        answer+=abs(count_arr[1]-before);
        before=count_arr[1];
    }

    cout<<answer;
}