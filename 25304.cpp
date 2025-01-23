#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int bill;
    cin>>bill;
    int answer=0;
    int N;
    cin>>N;
    while(N--){
        int w,n;
        cin>>w>>n;
        answer+=w*n;
    }
    if(answer==bill)cout<<"Yes";
    else cout<<"No";
}