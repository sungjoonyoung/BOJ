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
        if(a<b)swap(a,b);
        if(a%2==0)cout<<a/2*b;
        else if(b%2==0)cout<<b/2*a;
        else cout<<(a-1)*(b-1)/2+a/2+b/2;
        cout<<"\n";
    }
}