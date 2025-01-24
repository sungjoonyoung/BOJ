#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long tmp=1;
    int N;
    cin>>N;
    for(long long i=1;i<=N;i++)tmp*=i;
    cout<<tmp*6/3628800;
}