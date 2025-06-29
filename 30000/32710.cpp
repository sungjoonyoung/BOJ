#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int in;
    cin>>in;
    int key=0;
    for(int i=2;i<10;i++)if(in%i==0 and in/i<10)key=1;
    if(in<=10)key=1;
    cout<<key;
}