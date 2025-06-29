#include<iostream>
using namespace std;
bool arr[10][10];
bool plusa[20];
bool minua[20];
int N;
int maxnum[2];
void func(int x, int y, int w, int op);
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)cin>>arr[i][j];
    func(0,0,0,0);
    func(0,1,0,1);
    cout<<maxnum[0]+maxnum[1];
}
void func(int x, int y, int w, int op){
    maxnum[op]=max(maxnum[op],w);
    if(y>=N){
        x++;
        y%=N;
        if(N%2==0){
            if(y==1)y=0;
            else y=1;
        }
    }
    if(x==N)return;
    if(arr[x][y] && !plusa[x+y]==1 && !minua[N-y+x-1]==1){
        plusa[x+y]=1;
        minua[N-y+x-1]=1;
        func(x,y+2,w+1,op);
        plusa[x+y]=0;
        minua[N-y+x-1]=0;
    }
    func(x,y+2,w,op);
}