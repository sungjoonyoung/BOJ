#include<iostream>
using namespace std;
char arr[100][100];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    for(int i=0;i<N;i++)for(int j=0;j<M;j++){
        char c;
        cin>>c;
        arr[i][j]=c;
    }
    int count=0;
    for(int i=0;i<N;i++)for(int j=0;j<M;j++){
        char c;
        cin>>c;
        count+=(c==arr[i][j]);
    }
    cout<<count;
}