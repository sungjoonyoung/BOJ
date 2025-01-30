#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    while(N--){
        int in;
        cin>>in;
        if(in>=300)cout<<"1 ";
        else if(in>=275)cout<<"2 ";
        else if(in>=250)cout<<"3 ";
        else cout<<"4 ";
    }
}