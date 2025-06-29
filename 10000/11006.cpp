#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int N,M;
        cin>>N>>M;
        cout<<M*2-N<<" "<<(N-(M*2-N))/2<<"\n";
    }
}