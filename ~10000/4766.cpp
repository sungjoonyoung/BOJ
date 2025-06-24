#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long double before=-1000;
    cout<<fixed;
    cout.precision(2);
    while(1){
        long double in;
        cin>>in;
        if(in==999)break;
        if(before!=-1000)cout<<in-before<<"\n";
        before=in;
    }
}