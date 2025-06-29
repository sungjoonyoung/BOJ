#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=1;;i++){
        int in;
        cin>>in;
        if(in==0)break;
        cout<<i<<". ";
        in*=3;
        if(in%2){
            cout<<"odd ";
            in=(in+1)/2;
        }
        else{
            cout<<"even ";
            in=in/2;
        }
        in*=3;
        in/=9;
        cout<<in<<"\n";
    }
}