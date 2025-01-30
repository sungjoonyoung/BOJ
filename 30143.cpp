#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int N,A,D;
        cin>>N>>A>>D;
        cout<<N*(A*2+D*(N-1))/2<<"\n";
    }
}