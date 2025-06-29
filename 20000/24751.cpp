#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    double N;
    cout.precision(19);
    cin>>N;
    cout<<(100)/N<<"\n"<<100/(100-N);
}