#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    for(int i=1;i<101;i++){
        if((1+i+i*i)==N)cout<<i;
    }
}