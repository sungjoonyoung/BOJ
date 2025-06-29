#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed;
    cout.precision(2);
    for(int i=1;;i++){
        long double r,c,t;
        cin>>r>>c>>t;
        if(c==0)break;
        cout<<"Trip #"<<i<<": "<<r*3.141592*c/63360<<" "<<r*3.141592*c/63360/t*3600<<"\n";
    }
}