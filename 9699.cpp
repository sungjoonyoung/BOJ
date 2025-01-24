#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        int maxnum=0;
        for(int j=0;j<5;j++){
            int in;
            cin>>in;
            maxnum=max(maxnum,in);
        }
        cout<<"Case #"<<i<<": "<<maxnum<<"\n";
    }
}