#include<iostream>
using namespace std;
int arr[401][401];
int mina[402][402];
int plua[402][402];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    for(int i=1;i<=N;i++)for(int j=1;j<=N;j++)cin>>arr[i][j];

    

    for(int i=1;i<=N;i++){
        int x=i;
        int y=1;
        while(x<=N && y<=N){
            mina[x][y]=mina[x-1][y-1]+arr[x][y];
            x++;
            y++;
        }
    }
    for(int i=2;i<=N;i++){
        int x=1;
        int y=i;
        while(x<=N && y<=N){
            mina[x][y]=mina[x-1][y-1]+arr[x][y];
            x++;
            y++;
        }
    }
    for(int i=1;i<=N;i++){
        int x=i;
        int y=1;
        while(x>=0 && y>=0 && x<=N && y<=N){
            plua[x][y]=plua[x+1][y-1]+arr[x][y];
            x--;
            y++;
        }
    }
    for(int i=2;i<=N;i++){
        int x=N;
        int y=i;
        while(x>=0 && y>=0 && x<=N && y<=N){
            plua[x][y]=plua[x+1][y-1]+arr[x][y];
            x--;
            y++;
        }
    }
    
    
    // cout<<"A";
    // for(int i=1;i<=N;i++){
    //     for(int j=1;j<=N;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    // cout<<"A";
    int answer=-1000*4000;
    for(int s=1;s<=N;s++){
        for(int i=1;i+s<=N;i++)for(int j=1;j+s<=N;j++){
            answer=max(answer,mina[i+s][j+s]-mina[i-1][j-1]-(plua[i][j+s]-plua[i+s+1][j-1]));
        }
    }
    cout<<answer;
}