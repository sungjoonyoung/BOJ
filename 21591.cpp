#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int wc,hc,ws,hs;
    cin>>wc>>hc>>ws>>hs;
    cout<<((wc-2>=ws)and(hc-2>=hs));
}