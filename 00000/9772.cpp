#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        double x,y;
        cin>>x;
        if(cin.eof())break;
        cin>>y;
        if(x>0&&y>0)cout<<"Q1";
        else if(x<0&&y>0)cout<<"Q2";
        else if(x<0&&y<0)cout<<"Q3";
        else if(x>0&&y<0)cout<<"Q4";
        else cout<<"AXIS";
        cout<<"\n";
    }
}