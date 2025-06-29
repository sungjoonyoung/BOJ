#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==0 && b==0 && c==0 && d==0)return 0;
        cout<<c-b<<" "<<d-a<<"\n";
    }
}