#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    char c;
    int count=0;
    for(int i=0;i<6;i++){
        cin>>c;
        if(c=='W')count++;
    }
    if(count>4)cout<<1;
    else if(count>2)cout<<2;
    else if(count>0)cout<<3;
    else cout<<-1;
}