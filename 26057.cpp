#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int sum,N;
    cin>>sum>>N;
    sum-=N;
    cout<<abs(sum-N);
}