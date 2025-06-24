#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    cout<<fixed;
    cout.precision(1);
    while(T--){
        long double a,b;
        cin>>a>>b;
        cout<<abs(b-a)+(1e-32)<<"\n";
    }
}