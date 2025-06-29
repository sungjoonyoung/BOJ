#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int G;
        cin>>G;
        int a,b;
        cin>>a>>b;
        if(a>=b)cout<<"0\n";
        else{
            cout<<(b-a)*(2*G-1)<<"\n";
        }
    }
}