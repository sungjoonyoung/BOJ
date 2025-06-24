#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed;
    cout.precision(2);
    int T;
    cin>>T;
    while(T--){
        long double tmp;
        cin>>tmp;
        cout<<"$"<<tmp*8/10<<"\n";
    }
}