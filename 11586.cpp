#include<iostream>
using namespace std;
char arr[100][100];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)cin>>arr[i][j];
    int op;
    cin>>op;
    if(op==1){
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++)cout<<arr[i][j];
            cout<<"\n";
        }
    }
    else if(op==2){
        for(int i=0;i<N;i++){
            for(int j=N-1;j>=0;j--)cout<<arr[i][j];
            cout<<"\n";
        }
    }
    else {
        for(int i=N-1;i>=0;i--){
            for(int j=0;j<N;j++)cout<<arr[i][j];
            cout<<"\n";
        }
    }
}