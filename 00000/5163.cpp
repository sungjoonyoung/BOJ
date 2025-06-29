#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        long double n,w;
        cin>>n>>w;
        cout<<"Data Set "<<i<<":\n";
        while(n--){
            long double in;
            cin>>in;
            w-=in*in*in*4*3.1415926535897932384626433832795/3000;
        }
        if(w>0)cout<<"No";
        else cout<<"Yes";
        cout<<"\n\n";
    }
}