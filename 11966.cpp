#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    [&](){
        for(int i=0;i<=30;i++){
            if(N==(1<<i)){
                cout<<1;
                return;
            }
        }
        cout<<0;
    }();
}