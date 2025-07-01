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
vector<element> row_v;
void DFS(int ind,int h,int s,int e,int op){
    if(h>evenN)return;
    int ns=(ind<<(evenN-h));
    int ne=((ind+1)<<(evenN-h))-1;
    
    if(ne<s or e<ns)return;//빗나갔을 떄. 어짜피 업데이트 할 필요 없어. count에 저장될 거임.

    if(s<=ns and ne<e)arr[ind]+=op;//딱 맞으면 arr 업데이트 하고 (위에 종이을 올리거나 벗기고) ㅌㅌ -> 낮은 level 굳이 건들 필요가 없음.
    else {
        DFS(ind*2,h+1,s,e,op);
        DFS(ind*2+1,h+1,s,e,op);//ㅌㅌ할 상황이 아니니 탐색
    }

    if(arr[ind])count_arr[ind]=ne-ns+1;//덮혀 있으니 업뎃
    else{//맨 윗 커풀이 벗겨지면? 안 덮혀 있으면?
        if(ns==ne)count_arr[ind]=0;//바닥이 비어 있음.
        else count_arr[ind]=count_arr[ind*2]+count_arr[ind*2+1];//밑에 종이가 남아 있는 거 끌올
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
        row_v.push_back({x1,y1,y2,1}); //종이를 오른쪽에 쫘악 깔아 놓고 이게 중요!
        row_v.push_back({x2,y1,y2,-1}); // 오른쪽에 쫘악 없애고
    }
    sort(row_v.begin(),row_v.end(),cmp);
    long long answer=0;
    int l=0;
    for(int i=0;i<row_v.size();i++){
        element cur=row_v[i];
        int s=(1<<evenN)+cur.y1;
        int e=(1<<evenN)+cur.y2;
        answer+=(long long)count_arr[1]*(cur.x-l);
        DFS(1,0,s,e,cur.op);
        l=cur.x;
    }   
    cout<<answer;
}