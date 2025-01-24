#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(2);
    cout<<fixed;
    while(1){
        double in;
        cin>>in;
        if(in==-1.0)break;
        cout<<"Objects weighing "<<in<<" on Earth will weigh "<<in*0.167<<" on the moon.\n";
    }
}