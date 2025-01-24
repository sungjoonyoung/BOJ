#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int p[4];
    for(int i=0;i<4;i++)cin>>p[i];
    int x,y,r;
    cin>>x>>y>>r;
    for(int i=0;i<4;i++){
        if(p[i]==x){
            cout<<i+1;
            return 0;
        }
    }
    cout<<0;
}