#include<iostream>
#include<queue>
using namespace std;
struct struc{
    int x,y,d;
};
queue<struct struc> q;
int arr[100][100];
int var[4][100][100];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>M>>N;
    int x1,y1,x2,y2;
    x1=y1=x2=y2=-1;
    for(int i=0;i<N;i++)for(int j=0;j<M;j++){
        char in;
        cin>>in;
        arr[i][j]=in;
        for(int k=0;k<4;k++)var[k][i][j]=100*100*100;
        if(in=='C'){
            if(x1==-1){
                x1=i;
                y1=j;
            }
            else if(x2==-1){
                x2=i;
                y2=j;
            }
        }
    }
    q.push({x1,y1,-1});
    for(int k=0;k<4;k++)var[k][x1][y1]=0;
    while(!q.empty()){
        int curx=q.front().x;
        int cury=q.front().y;
        int curd=q.front().d;
        q.pop();
        if(curx==x2&&cury==y2)continue;
        for(int i=0;i<4;i++){
            int tmpx=curx+dx[i];
            int tmpy=cury+dy[i];
            if(tmpx<0||tmpx>=N||tmpy<0||tmpy>=M)continue;
            if(arr[tmpx][tmpy]=='*')continue;
            if(curd==-1||curd==i){
                if(var[i][curx][cury]>=var[i][tmpx][tmpy])continue;
                var[i][tmpx][tmpy]=var[i][curx][cury];
                q.push({tmpx,tmpy,i});
            }
            else{
                if(var[curd][curx][cury]+1>=var[i][tmpx][tmpy])continue;
                var[i][tmpx][tmpy]=var[curd][curx][cury]+1;
                q.push({tmpx,tmpy,i});
            }
        }
    }
    int answer=100*100*100;
    for(int k=0;k<4;k++)answer=min(answer,var[k][x2][y2]);
    cout<<answer;
}