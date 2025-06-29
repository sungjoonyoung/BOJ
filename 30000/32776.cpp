#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int S,F,M1,M2;
    cin>>S>>M1>>F>>M2;
    if(S<=60*4)cout<<"high speed rail";
    else if(S<=M1+F+M2)cout<<"high speed rail";
    else cout<<"flight";
}