#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    long long answer=0;
    long long tmp=0;
    while(N--){
        int in;
        cin>>in;
        if(in)tmp++;
        else tmp--;
        answer+=tmp;
    }
    cout<<answer;
}