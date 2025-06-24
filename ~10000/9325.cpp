#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        long long sum;
        cin>>sum;
        int N;
        cin>>N;
        while(N--){
            long long n,w;
            cin>>n>>w;
            sum+=n*w;            
        }
        cout<<sum<<"\n";
    }
}