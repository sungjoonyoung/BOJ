#include<iostream>
#include<cmath>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    cout.precision(10);
    cout<<M+N-sqrt(pow(N,2)+pow(M,2));
}