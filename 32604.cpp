#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    int bx,by;
    bx=by=-1;
    while(N--){
        int x,y;
        cin>>x>>y;
        if(x<bx or y<by){
            cout<<"no";
            return 0;
        }
        bx=x;
        by=y;
    }
    cout<<"yes";
}