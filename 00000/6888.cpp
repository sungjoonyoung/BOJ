#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int X,Y;
    cin>>X>>Y;
    for(int i=X;i<=Y;i+=60)cout<<"All positions change in year "<<i<<"\n";
}