#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    int a,b;
    a=b=0;
    while(T--){
        int x,y;
        cin>>x>>y;
        if(x>y)a++;
        else if(x<y)b++;
    }
    cout<<a<<" "<<b;
}