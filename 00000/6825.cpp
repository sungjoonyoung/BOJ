#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    double w,h;
    cin>>w>>h;
    w/=h*h;
    if(w>25)cout<<"Overweight";
    else if(w>18.5)cout<<"Normal weight";
    else cout<<"Underweight";
}