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
        if(abs(N)%2==0)cout<<N<<" is even\n";
        else cout<<N<<" is odd\n";
    }
}