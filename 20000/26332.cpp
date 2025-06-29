#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int n,b;
        cin>>n>>b;
        cout<<n<<" "<<b<<"\n"<<b+(b-2)*(n-1)<<"\n";
    }
}