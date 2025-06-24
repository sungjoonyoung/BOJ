#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t1,m1,t2,m2;
    cin>>t1>>m1>>t2>>m2;
    m1+=t1*60;
    m2+=t2*60;
    m2+=60*24;
    m2-=m1;
    m2%=60*24;
    cout<<m2<<" "<<m2/30;
}