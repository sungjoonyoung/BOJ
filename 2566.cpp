#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int maxnum=-1;
    int x,y;
    for(int i=1;i<=9;i++)for(int j=1;j<=9;j++){
        int in;
        cin>>in;
        if(in>maxnum){
            maxnum=in;
            x=i;
            y=j;
        }
    }
    cout<<maxnum<<"\n"<<x<<" "<<y;
}