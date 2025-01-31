#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    a=b=100;
    int T;
    cin>>T;
    while(T--){
        int x,y;
        cin>>x>>y;
        if(x<y)a-=y;
        else if(x>y)b-=x;
    }
    cout<<a<<"\n"<<b;
}