#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        long long in;
        cin>>in;
        if(in==0)return 0;
        if(in<=1'000'000)cout<<in<<"\n";
        else if(in<=5'000'000)cout<<in*9/10<<"\n";
        else cout<<in*4/5<<"\n";
    }
}