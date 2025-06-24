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
        double sum=0;
        int man=0;
        while(N--){
            int n;
            double in;
            cin>>n>>in;
            sum+=in*n;
            man+=n;
        }
        cout<<man<<" "<<sum/man<<"\n";
    }
}