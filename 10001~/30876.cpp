#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    int minnum=1000*1001;
    int indx,indy;

    for(int i=0;i<N;i++){
        int x,y;
        cin>>x>>y;
        if(y<minnum){
            minnum=y;
            indx=x;
            indy=y;
        }
    }
    cout<<indx<<" "<<indy;
}