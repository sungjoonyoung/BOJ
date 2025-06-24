#include<iostream>
using namespace std;
int arr[100][100];
int tur[100][100];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>M>>N;
    for(int i=0;i<N;i++)for(int j=0;j<M;j++)cin>>arr[i][j];
    
    for(int i=0;i<M;i++)for(int j=N-1;j>=0;j--){
        int in;
        cin>>in;
        if(in!=arr[j][i]){
            cout<<"|>___/|     /}\n";
            cout<<"| O O |    / }\n";
            cout<<"( =0= )\"\"\"\"  \\\n";
            cout<<"| ^  ____    |\n";
            cout<<"|_|_/    ||__|";
            return 0;
        }
    }
    
    cout<<"|>___/|        /}\n";
    cout<<"| O < |       / }\n";
    cout<<"(==0==)------/ }\n";
    cout<<"| ^  _____    |\n";
    cout<<"|_|_/     ||__|";
}