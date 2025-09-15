#include<iostream>
#include<vector>
using namespace std;
int adj_mat[1001][1001];
int cnt_arr[1001];
int N;

void DFS(int x){
    for(;cnt_arr[x]<N;cnt_arr[x]++){
        if(!adj_mat[x][cnt_arr[x]])continue;
        adj_mat[x][cnt_arr[x]]--;
        adj_mat[cnt_arr[x]][x]--;
        DFS(cnt_arr[x]);
    }
    cout<<x+1<<" ";//백트랙킹 느낌으로
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    int start=0;
    for(int i=0;i<N;i++)for(int j=0;j<N;j++){
        cin>>adj_mat[i][j];
        cnt_arr[i]+=adj_mat[i][j];
        cnt_arr[j]+adj_mat[i][j];
    }
    //
    for(int i=0;i<N;i++)if(cnt_arr[i]%2){cout<<"-1";return 0;}
    fill(cnt_arr,cnt_arr+N,0); // 재귀함수에서 되돌아 왔을 때 시작하는 index를 저장하는 거
    DFS(start);
    // for(int i=0;i<N;i++)for(int j=0;j<N;j++)if(adj_mat[i][j])cout<<"\n"<<i<<" "<<j;
}