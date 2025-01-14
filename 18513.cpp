#include<iostream>
#include<queue>
#include<vector>
#include<utility>
using namespace std;
queue<pair<int,int>> q;
//bool arr[300'000'005];
vector<bool> arr(300'000'005);
int dx[2]={-1,1};
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    for(int i=0;i<N;i++){
        int in;
        cin>>in;
        arr[in+150'000'000]=1;
        q.push({in,0});
    }
    long long answer=0;
    while(!q.empty()){
        int curx=q.front().first;
        int curw=q.front().second;
        q.pop();
        for(int i=0;i<2;i++){
            int tmpx=curx+dx[i];
            if(arr[tmpx+150'000'000])continue;
            M--;
            arr[tmpx+150'000'000]=1;
            q.push({tmpx,curw+1});
            answer+=curw+1;
            if(M==0){
                cout<<answer;
                return 0;
            }
        }
    }
}