#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int S,SS;
    cin>>S>>SS;
    while(S--){
        int x,y;
        cin>>x>>y;
        if(x!=y){
            cout<<"Wrong Answer";
            return 0;
        }
    }
    while(SS--){
        int x,y;
        cin>>x>>y;
        if(x!=y){
            cout<<"Why Wrong!!!";
            return 0;
        }
    }
    cout<<"Accepted";
}