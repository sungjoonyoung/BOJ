#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int in;
    cin>>in;
    cout<<(char)((in-1)%8+'a')<<(in-1)/8+1;
}