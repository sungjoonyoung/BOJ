#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int A,B,C;
        cin>>A>>B>>C;
        cout<<A*(C-1)+B<<"\n";
    }
}