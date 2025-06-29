#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int answer;
    cin>>answer;
    int count=0;
    for(int i=0;i<5;i++){
        int in;
        cin>>in;
        if(answer==in)count++;
    }
    cout<<count;
}