#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int a,b;
        cin>>a>>b;
        if(a<b)cout<<"NO BRAINS\n";
        else cout<<"MMM BRAINS\n";
    }
}