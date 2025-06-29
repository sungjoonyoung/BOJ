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
        int gcd;
        for(int i=min(a,b);i>=1;i--){
            if(a%i==0 && b%i==0){
                gcd=i;
                break;
            }
        }
        cout<<a*b/gcd<<" "<<gcd<<"\n";
    }
}