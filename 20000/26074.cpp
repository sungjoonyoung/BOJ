#include<iostream>
using namespace std;
int main(void){
    int N,M;cin>>N>>M;
    int in;for(int i=0;i<8;i++)cin>>in;
    if(N==1 and M==2)cout<<"ChongChong";
    else if(N==2 and M==1)cout<<"ChongChong";
    else cout<<"GomGom";
}