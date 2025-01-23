#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<min(a,min(b,c))<<"\n";
    }
}