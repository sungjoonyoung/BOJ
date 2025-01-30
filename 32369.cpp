#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,A,B;
    cin>>N>>A>>B;
    int a,b;
    a=b=1;
    while(N--){
        a+=A;
        b+=B;
        if(a<b)swap(a,b);
        else if(a==b)b--;
    }
    cout<<a<<" "<<b;
}