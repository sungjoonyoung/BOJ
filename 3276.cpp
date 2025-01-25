#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    int minnum=1000;
    int x,y;
    for(int i=1;i<=100;i++)for(int j=1;j<=100;j++){
        if(i*j>=N){
            if(i+j<=minnum){
                minnum=i+j;
                x=i;
                y=j;
            }
        }
    }
    cout<<x<<" "<<y;
}