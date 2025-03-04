#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long answer=0;
    while(1){
        long long in;
        cin>>in;
        if(cin.eof())break;
        answer+=in;
    }
    cout<<answer;
}