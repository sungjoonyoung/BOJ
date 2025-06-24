#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int maxnum=-1000001;
        int minnum=1000001;
        while(N--){
            int in;
            cin>>in;
            maxnum=max(maxnum,in);
            minnum=min(minnum,in);
        }
        cout<<minnum<<" "<<maxnum<<"\n";
    }
}