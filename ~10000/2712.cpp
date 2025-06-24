#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    cout<<fixed;
    cout.precision(4);
    while(T--){
        long double x;
        cin>>x;
        string s;
        cin>>s;
        if(s=="kg")cout<<x*2.2046<<" lb\n";
        if(s=="lb")cout<<x*0.4536<<" kg\n";
        if(s=="l")cout<<x*0.2642<<" g\n";
        if(s=="g")cout<<x*3.7854<<" l\n";
    }
}