#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long double in;
    cin>>in;
    cout<<fixed;
    cout.precision(0);
    cout<<in*78/100<<" "<<in*80/100+(in*20*78/100/100);
}