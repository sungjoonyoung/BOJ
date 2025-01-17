#include<iostream>
using namespace std;
char arr[10][10];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M,K;
    cin>>N>>M>>K;
    for(int i=0;i<N;i++)for(int j=0;j<M;j++)cin>>arr[i][j];
    for(int i=0;i<N;i++){
        for(int k=0;k<K;k++){
            for(int j=0;j<M;j++){
                for(int m=0;m<K;m++)cout<<arr[i][j];
            }
            cout<<"\n";
        }
    }
}