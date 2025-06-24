#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        int a,b,c;
        cin>>a;
        if(cin.eof())return 0;
        cin>>b>>c;
        cout<<max((b-a-1),(c-b-1))<<"\n";
    }
}