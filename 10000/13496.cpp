#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        int n,s,d;
        int sum=0;
        cin>>n>>s>>d;
        for(int j=0;j<n;j++){
            int d1,v;
            cin>>d1>>v;
            if(s*d>=d1)sum+=v;
        }
        cout<<"Data Set "<<i<<":\n"<<sum<<"\n\n";
    }
}