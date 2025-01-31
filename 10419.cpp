#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;cin>>T;
    while(T--){
        int in;
        cin>>in;
        for(int i=0;;i++){
            if(i+i*i>in){
                cout<<i-1<<"\n";
                break;
            }
        }
    }
}