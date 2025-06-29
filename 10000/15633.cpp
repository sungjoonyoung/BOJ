#include<iostream>
#include<cmath>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    long long answer=0;
    for(int i=1;i<=N;i++){
        if(N%i==0)answer+=i;
    }
    cout<<answer*5-24;
}