#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int in;
        cin>>in;
        int answer=1;
        for(int i=1;i<=in;i++)answer*=i;
        cout<<answer%10<<"\n";
    }
}