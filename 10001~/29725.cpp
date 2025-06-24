#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int answer=0;
    for(int i=0;i<8;i++)for(int j=0;j<8;j++){
        char c;
        cin>>c;
        if(c=='K')answer+=0;
        if(c=='k')answer-=0;
        if(c=='P')answer+=1;
        if(c=='p')answer-=1;
        if(c=='N')answer+=3;
        if(c=='n')answer-=3;
        if(c=='B')answer+=3;
        if(c=='b')answer-=3;
        if(c=='R')answer+=5;
        if(c=='r')answer-=5;
        if(c=='Q')answer+=9;
        if(c=='q')answer-=9;
    }
    cout<<answer;
}