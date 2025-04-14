#include<iostream>
using namespace std;
int arr[8][8];
bool can[8][8];
long long countnum=0;
int LX,LY,N;
void func(int x, int y){
    if(!can[x][y]){
        y++;x=1;
    }
    if(x==1 and y==LY){
        // for(int i=1;i<=7;i++){
        //     for(int j=1;j<=7;j++)cout<<arr[i][j];
        //     cout<<"\n";
        // }
        // cout<<"\nA\n";
        countnum++;
        return;
    }
    for(int i=1;i<=N;i++){
        if(arr[x-1][y]>=i or arr[x][y-1]>i)continue;
        arr[x][y]=i;
        func(x+1,y);
        arr[x][y]=0;
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        fill(arr[0],arr[9],0);
        fill(can[0],can[9],0);
        countnum=0;
        int k;
        cin>>k;
        LX=k;
        if(cin.eof())break;
        for(int i=1;i<=k;i++){
            int in;
            cin>>in;
            for(int j=1;j<=in;j++)can[i][j]=1;
            if(i==1)LY=in+1;
        }
        cin>>N;
        func(1,1);
        cout<<countnum<<"\n";
    }
}