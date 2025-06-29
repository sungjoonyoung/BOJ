#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c==0)break;
        if(a+b+c-max(a,max(b,c))<=max(a,max(b,c)))cout<<"Invalid";
        else if(a==b and b==c)cout<<"Equilateral";
        else if(a==b or b==c or c==a)cout<<"Isosceles";
        else cout<<"Scalene";
        cout<<"\n";
    }
}