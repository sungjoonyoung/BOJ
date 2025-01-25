#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int r,e,c;
        cin>>r>>e>>c;
        if(r<e-c)cout<<"advertise";
        else if(r>e-c)cout<<"do not advertise";
        else cout<<"does not matter";
        cout<<"\n";
    }
}