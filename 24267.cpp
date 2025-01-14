#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    N=(N)*(N-1)*(N-2)/6;
    cout<<N;
    cout<<"\n3";
}