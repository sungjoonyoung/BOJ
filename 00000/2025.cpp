#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int dx[8]={1,1,2,2,-1,-1,-2,-2};
int dy[8]={2,-2,1,-1,2,-2,-1,1};
vector<pair<int,int>> v;
int visited[666][666];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    int curx,cury;
    cin>>curx>>cury;
    curx--;
    cury--;
    visited[curx][cury]=1;
    v.push_back({curx,cury});
    int tmp=N*N;
    while(tmp--){
        int minnum=10;
        int minx,miny;
        double distance=-1;
        for(int i=0;i<8;i++){
            int nx=curx+dx[i];
            int ny=cury+dy[i];
            int count=0;
            if(nx<0 or ny<0 or nx>=N or ny>=N)continue;
            if(visited[nx][ny])continue;

            for(int k=0;k<8;k++){
                int nnx=nx+dx[k];
                int nny=ny+dy[k];
                if(nnx<0 or nny<0 or nnx>=N or nny>=N)continue;
                if(visited[nnx][nny])continue;
                count++;
            }

            if(count<=minnum){
                if(count<minnum){
                    distance=abs(nx-N/2)+abs(ny-N/2);
                    minnum=count;
                    minx=nx;
                    miny=ny;
                }
                else if (abs(nx-N/2)+abs(ny-N/2)>distance){
                    distance=abs(nx-N/2)+abs(ny-N/2);
                    minnum=count;
                    minx=nx;
                    miny=ny;
                }
            }
        }
        if(minnum==10){
            break;
        }
        curx=minx;
        cury=miny;
        visited[curx][cury]=1;
        v.push_back({curx,cury});
    }

    if(v.size()!=N*N){
        cout<<"-1 -1";
        return 0;
    }
    for(int i=0;i<v.size();i++)cout<<v[i].first+1<<" "<<v[i].second+1<<"\n";
}