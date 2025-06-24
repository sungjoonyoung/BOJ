#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    int answer=10001;
    while(N--){
        int a,b;
        cin>>a>>b;
        answer=min(answer,b/a);
    }
    cout<<answer;
}