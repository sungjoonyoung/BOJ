#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    int tmpN;
    tmpN=N%10*10 + (N/10+N%10)%10;
    int count=1;
    while(tmpN!=N){
        tmpN=tmpN%10*10 + (tmpN/10+tmpN%10)%10;
        count++;
    }
    cout<<count;
}