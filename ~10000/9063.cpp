#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    int Mx,My,mx,my;
    Mx=My=-10001;
    mx=my=10001;
    while(N--){
        int x,y;
        cin>>x>>y;
        Mx=max(Mx,x);
        My=max(My,y);
        mx=min(mx,x);
        my=min(my,y);
    }
    cout<<(Mx-mx)*(My-my);
}