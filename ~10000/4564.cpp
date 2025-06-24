#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        int in;
        cin>>in;
        if(in==0)break;
        while(in>=10){
            cout<<in<<" ";
            int tmp=1;
            while(in){
                tmp*=in%10;
                in/=10;
            }
            in=tmp;
        }
        cout<<in<<"\n";

    }
}