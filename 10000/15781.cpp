#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    long long answer=0;
    long long maxnum=0;
    while(N--){
        long long in;
        cin>>in;
        maxnum=max(maxnum,in);
    }
    answer+=maxnum;
    maxnum=0;
    while(M--){
        long long in;
        cin>>in;
        maxnum=max(maxnum,in);
    }
    answer+=maxnum;
    cout<<answer;
}