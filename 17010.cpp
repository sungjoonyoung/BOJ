#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int N;
        char c;
        cin>>N>>c;
        while(N--)cout<<c;
        cout<<"\n";
    }
}