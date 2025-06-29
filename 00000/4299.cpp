#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int s,m;
    cin>>s>>m;
    for(int i=0;i<1001;i++)for(int j=0;j<1001;j++){
        if(i+j==s&&abs(i-j)==m){
        cout<<max(i,j)<<" "<<min(i,j);
        return 0;
        }
    }
    cout<<-1;
}