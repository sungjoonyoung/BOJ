#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        int in;
        cin>>in;
        if(in==0)break;
        cout<<in*(in+1)*(2*in+1)/6<<"\n";
    }
}