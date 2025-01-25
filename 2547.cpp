#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        long long N;
        cin>>N;
        long long sum=0;
        for(int i=0;i<N;i++){
            long long tmp;
            cin>>tmp;
            sum+=tmp;
            sum%=N;
        }
        if(sum)cout<<"NO\n";
        else cout<<"YES\n";
    }
}