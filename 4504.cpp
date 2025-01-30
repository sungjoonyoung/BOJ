#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    while(1){
        int in;
        cin>>in;
        if(in==0)break;
        if(in%N==0)cout<<in<<" is a multiple of "<<N<<".\n";
        else cout<<in<<" is NOT a multiple of "<<N<<".\n";
    }
}