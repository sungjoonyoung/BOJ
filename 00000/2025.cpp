#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
int dx[8]={2,2,1,1,-2,-2,-1,-1};
int dy[8]={1,-1,2,-2,1,-1,-2,2};
pair<int,int> dirs[8] = {
    {2,1},{2,-1},{1,2},{1,-2},
    {-2,1},{-2,-1},{-1,-2},{-1,2}
};

vector<pair<int,int>> v;
int visited[666][666];
int N;
int curx,cury;
int sx,sy;
int func(void){
    curx=sx;cury=sy;
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)visited[i][j]=0;
    v.clear();
    
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
                    distance=abs((double)nx-(double)N/2-0.5)*abs((double)nx-(double)N/2-0.5)+abs((double)ny-(double)N/2-0.5)*abs((double)ny-(double)N/2-0.5);
                    minnum=count;
                    minx=nx;
                    miny=ny;
                }
                else if (abs((double)nx-(double)N/2-0.5)*abs((double)nx-(double)N/2-0.5)+abs((double)ny-(double)N/2-0.5)*abs((double)ny-(double)N/2-0.5)>=distance){
                    distance=abs((double)nx-(double)N/2-0.5)*abs((double)nx-(double)N/2-0.5)+abs((double)ny-(double)N/2-0.5)*abs((double)ny-(double)N/2-0.5);
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
        //cout<<"-1 -1";
        return 0;
    }
    return 1;
}
int func1(void){
    curx=sx;cury=sy;
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)visited[i][j]=0;
    v.clear();
    
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
                    distance=abs((double)nx-(double)N/2-0.5)*abs((double)nx-(double)N/2-0.5)+abs((double)ny-(double)N/2-0.5)*abs((double)ny-(double)N/2-0.5);
                    minnum=count;
                    minx=nx;
                    miny=ny;
                }
                // else if (abs((double)nx-(double)N/2-0.5)*abs((double)nx-(double)N/2-0.5)+abs((double)ny-(double)N/2-0.5)*abs((double)ny-(double)N/2-0.5)>=distance){
                //     distance=abs((double)nx-(double)N/2-0.5)*abs((double)nx-(double)N/2-0.5)+abs((double)ny-(double)N/2-0.5)*abs((double)ny-(double)N/2-0.5);
                //     minnum=count;
                //     minx=nx;
                //     miny=ny;
                // }
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
        //cout<<"-1 -1";
        return 0;
    }
    return 1;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>N;
    cin>>sx>>sy;
    sx--;
    sy--;

    for(int i=0;i<8;i++){
        if(func()){
            for(int i=0;i<v.size();i++)cout<<v[i].first+1<<" "<<v[i].second+1<<"\n";
            return 0;
        }
        else if(func1()){
            for(int i=0;i<v.size();i++)cout<<v[i].first+1<<" "<<v[i].second+1<<"\n";
            return 0;
        }
        else{
            for(int j=0;j<8-1;j++){
                swap(dx[j],dx[j+1]);
                swap(dy[j],dy[j+1]);
            }
        }
    }
    cout<<"-1 -1";
}