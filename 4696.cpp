#include<iostream>
#include<cmath>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed;
    cout.precision(2);
    while(1){
        long double in;
        cin>>in;
        if(in==0)break;
        long double sum=0;
        for(int i=0;i<5;i++)sum+=pow(in,i);
        cout<<sum<<"\n";
    }
}