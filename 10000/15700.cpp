#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long a,b;
    cin>>a>>b;
    long long sum=0;
    sum+=(a/2)*(b/2)*2;
    if(a%2)sum+=b/2;
    if(b%2)sum+=a/2;
    cout<<sum;
}