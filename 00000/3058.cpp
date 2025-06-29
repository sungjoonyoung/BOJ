#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int minnum=101;
        int sum=0;
        for(int i=0;i<7;i++){
            int in;
            cin>>in;
            if(in%2==0){
                minnum=min(minnum,in);
                sum+=in;
            }
        }
        cout<<sum<<" "<<minnum<<"\n";
    }
}