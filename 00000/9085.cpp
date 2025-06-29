#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        long long answer=0;
        while(N--){
            long long in;
            cin>>in;
            answer+=in;
        }
        cout<<answer<<"\n";
    }
}