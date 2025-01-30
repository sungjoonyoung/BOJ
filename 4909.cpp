#include<iostream>
#include<algorithm>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        int a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        if(a+b+c+d+e+f==0)break;
        int sum=a+b+c+d+e+f-max({a,b,c,d,e,f})-min({a,b,c,d,e,f});
        cout<<(double)sum/4<<"\n";
    }
}