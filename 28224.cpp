#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int answer=0;
    int N;
    cin>>N;
    while(N--){
        int in;
        cin>>in;
        answer+=in;
    }
    cout<<answer;
}