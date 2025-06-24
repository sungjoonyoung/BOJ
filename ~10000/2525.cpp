#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int H,M;
    cin>>H>>M;
    M+=H*60;
    int in;
    cin>>in;
    M+=in;
    M%=24*60;
    cout<<M/60<<" "<<M%60;
}