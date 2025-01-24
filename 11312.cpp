#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        long long a,b;
        cin>>a>>b;
        a/=b;
        cout<<a*(2+2*(a-1))/2<<"\n";
    }
}