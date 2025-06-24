#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,A;
    cin>>N>>A;
    int answer=0;
    while(N--){
        int in;
        cin>>in;
        answer+=in/A;
    }
    cout<<answer;
}