#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(!(a||b||c||d))break;
        int count=0;
        while(1){if(a==b and b==c and c==d and a==d){
            cout<<count<<"\n";
            break;
        }
        int aa,bb,cc,dd;
        aa=abs(a-b);
        bb=abs(c-b);
        cc=abs(c-d);
        dd=abs(a-d);
        a=aa;
        b=bb;
        c=cc;
        d=dd;
        count++;}
    }
}