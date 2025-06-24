#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int in;
    cin>>in;
    cout<<in/2+((in%2)?3:0);
}