#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int L,N;
    cin>>L>>N;
    int sum=0;
    for(int i=0;i<N;i++){
        int a,b;
        cin>>a>>b;
        sum+=a*b;
    }
    cout<<sum/L;
}