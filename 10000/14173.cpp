#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int mx,Mx,my,My;
    mx=my=11;
    Mx=My=-1;
    for(int i=0;i<4;i++){
        int x,y;
        cin>>x>>y;
        mx=min(mx,x);
        my=min(my,y);
        Mx=max(Mx,x);
        My=max(My,y);
    }
    cout<<max(Mx-mx,My-my)*max(Mx-mx,My-my);
}