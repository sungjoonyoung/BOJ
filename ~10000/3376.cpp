#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct struc{
    int x,y,o,w;
};
vector<struct struc> arr[501][501];
queue<struct struc> q;
bool visited[501][501][2];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>M>>N;
    int x,y,xx,yy;
    cin>>y>>x>>yy>>xx;
    for(int i=0;i<=N;i++){
        for(int j=0;j<M;j++){
            char c;
            cin>>c;
            if(c=='n')continue;
            else if(c=='b'){
                arr[i][j].push_back({i,j+1,1,0});
                arr[i][j+1].push_back({i,j,1,0});
            }
            else{
                arr[i][j].push_back({i,j+1,0,0});
                arr[i][j+1].push_back({i,j,0,0});
            }
        }
        if(i!=N)for(int j=0;j<M*2+1;j++){
            // /
            if(j%2){
                char c;
                cin>>c;
                // i+1,j/2 i,j/2+1
                if(c=='n')continue;
                else if(c=='b'){
                    arr[i+1][j/2].push_back({i,j/2+1,1,0});
                    arr[i][j/2+1].push_back({i+1,j/2,1,0});
                }
                else{
                    arr[i+1][j/2].push_back({i,j/2+1,0,0});
                    arr[i][j/2+1].push_back({i+1,j/2,0,0});
                }
            }
            // vertical
            else{
                char c;
                cin>>c;
                if(c=='n')continue;
                else if(c=='b'){
                    arr[i][j/2].push_back({i+1,j/2,1,0});
                    arr[i+1][j/2].push_back({i,j/2,1,0});
                }
                else{
                    arr[i][j/2].push_back({i+1,j/2,0,0});
                    arr[i+1][j/2].push_back({i,j/2,0,0});
                }
            }
        }
    }
    q.push({x,y,-1,0});
    while(!q.empty()){
        int curx=q.front().x;
        int cury=q.front().y;
        int curo=q.front().o;
        int curw=q.front().w;
        q.pop();
        //cout<<curx<<" "<<cury<<" "<<curo<<" "<<curw<<"\n";
        if(curx==xx and cury==yy){
            cout<<curw;
            return 0;
        }
        for(int i=0;i<arr[curx][cury].size();i++){
            int tmpx=arr[curx][cury][i].x;
            int tmpy=arr[curx][cury][i].y;
            int tmpo=arr[curx][cury][i].o;
            if(curo==tmpo)continue;
            if(visited[tmpx][tmpy][tmpo])continue;
            q.push({tmpx,tmpy,tmpo,curw+1});
            visited[tmpx][tmpy][tmpo]=1;
            //arr[curx][cury].erase(arr[curx][cury].begin()+i);
            //i--;
        }
    }
}