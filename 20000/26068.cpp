#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    int count=0;
    while(T--){
        char c;
        cin>>c;
        cin>>c;
        int in;
        cin>>in;
        count+=(in<=90);
    }
    cout<<count;
}