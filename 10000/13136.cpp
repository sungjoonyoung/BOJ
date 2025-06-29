#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long R,C,N;
    cin>>R>>C>>N;
    long long sum=(R/N)*(C/N);
    if(R%N)sum+=C/N;
    if(C%N)sum+=R/N;
    if(R%N>0&&C%N>0)sum++;
    cout<<sum;
}