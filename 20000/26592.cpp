#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    cout<<fixed;
    cout.precision(2);
    while(N--){
        long double a,b;
        cin>>a>>b;
        a+=1e-20;
        cout<<"The height of the triangle is "<<a*2/b<<" units\n";
    }
}