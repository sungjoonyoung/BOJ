#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int T;
    cin>>T;
    while(T--){
        int in;
        cin>>in;
        cout<<in<<" ";
        if(in>1000)cout<<1000*n+(in-1000)*m<<"\n";
        else cout<<in*n<<"\n";
    }
}