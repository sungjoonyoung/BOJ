#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    if(N==1)cout<<1;
    else for(int i=2;;i++){
        if(N%2)N=N*3+1;
        else N/=2;
        if(N==1){
            cout<<i;return 0;
        }
    }
}