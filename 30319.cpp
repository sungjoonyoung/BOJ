#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int Y,M,D;
    char c;
    cin>>Y>>c>>M>>c>>D;
    if(M<9)cout<<"GOOD";
    else{
        if(M==9){
            if(D<=30-14)cout<<"GOOD";
            else cout<<"TOO LATE";
        }
        else{
            cout<<"TOO LATE";
        }
    }
}