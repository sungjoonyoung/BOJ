#include<iostream>
#include<cmath>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    for(int i=0;;i++){
        if(pow(10,i)>b){
            b+=a*pow(10,i);
            break;
        }
    }
    for(int i=0;;i++){
        if(pow(10,i)>d){
            d+=c*pow(10,i);
            break;
        }
    }
    cout<<b+d;
}