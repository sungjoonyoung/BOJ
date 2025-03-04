#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    if(N==0)cout<<"divide by zero";
    else{
        long double sum=0;
        long double gisum=0;
        for(int i=0;i<N;i++){
            long double in;
            cin>>in;
            sum+=in;
            gisum+=in/N;
        }
        cout<<"1.00";
    }
}