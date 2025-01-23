#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,x,b,y,T;
    cin>>a>>x>>b>>y>>T;
    if(T<=30){
        cout<<a<<" "<<b;
    }
    else if(T<=45){
        cout<<a+(T-30)*x*21<<" "<<b;
    }
    else cout<<a+(T-30)*x*21<<" "<<b+(T-45)*y*21;
}