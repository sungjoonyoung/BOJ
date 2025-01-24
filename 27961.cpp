#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long N;
    cin>>N;
    int count=0;
    while(N){
        if(N==1)N--;
        else if(N%2==0)N/=2;
        else N=N/2+1;
        count++;
    }
    cout<<count;
}