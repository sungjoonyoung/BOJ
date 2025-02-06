#include<iostream>
#include<queue>
#include<vector>
#include<utility>
#include<cmath>
using namespace std;

vector<int> arr[400];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int map[20][20];
int ind[401];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    long long answer=0;
    for(int i=0;i<N*N;i++){
        for(int j=0;j<5;j++){
            int in;
            cin>>in;
            arr[i].push_back(in);
        }
        ind[arr[i][0]]=i;
    }
    for(int i=0;i<N*N;i++){
        int tmpx,tmpy;
        int maxl,maxb;
        maxl=maxb=-1;
        for(int x=0;x<N;x++)for(int y=0;y<N;y++){
            if(map[x][y])continue;
            int l,b;
            l=b=0;
            for(int k=0;k<4;k++){
                int nx=x+dx[k];
                int ny=y+dy[k];
                if(nx<0 or ny<0 or nx>=N or ny>=N)continue;
                for(int n=1;n<5;n++)if(map[nx][ny]==arr[i][n])l++;
                if(map[nx][ny]==0)b++;
            }
            if(l>maxl){
                tmpx=x;
                tmpy=y;
                maxl=l;
                maxb=b;
            }
            else if(l==maxl and b>maxb){
                tmpx=x;
                tmpy=y;
                maxl=l;
                maxb=b;
            }
        }
        map[tmpx][tmpy]=arr[i][0];
    }

    // for(int i=0;i<N;i++){
    //     for(int j=0;j<N;j++){
    //         cout<<map[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            int l=0;
            for(int k=0;k<4;k++){
                int nx=i+dx[k];
                int ny=j+dy[k];
                if(nx<0 or ny<0 or nx>=N or ny>=N)continue;
                for(int n=1;n<5;n++)if(map[nx][ny]==arr[ind[map[i][j]]][n])l++;
            }
            if(l)answer+=pow(10,l-1);
        }
    }
    cout<<answer;
}