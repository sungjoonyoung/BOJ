#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b;
    cin>>a>>b;
    int c,d;
    cin>>c>>d;
    int x,y;
    cin>>x>>y;
    a=abs(x-a);
    b=abs(y-b);
    c=abs(x-c);
    d=abs(y-d);
    a=max(a,b);
    c=c+d;
    //cout<<a<<" "<<c;


    if(a<c)cout<<"bessie";
    else if(c<a)cout<<"daisy";
    else cout<<"tie";
}