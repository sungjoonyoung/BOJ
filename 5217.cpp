#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int in;
        cin>>in;
        cout<<"Pairs for "<<in<<": ";
        int key=0;
        for(int i=1;i<(in+1)/2;i++){
            if(i!=1)cout<<", ";
            cout<<i<<" "<<in-i;
        }
        cout<<"\n";
    }
}