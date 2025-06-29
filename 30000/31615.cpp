#include<iostream>
#include<cmath>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    cin>>a>>b;
    a+=b;
    for(int i=0;;i++){
        if(a<pow(10,i)){
            cout<<i;
            return 0;
        }
    }
}