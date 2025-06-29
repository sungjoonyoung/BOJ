#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    long long answer=1'000'000'000'000'000'000;
    while(N--){
        long long a,b;
        cin>>a>>b;
        answer=min(answer,a+b);
    }
    cout<<answer;
}