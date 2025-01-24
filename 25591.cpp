#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    cin>>a>>b;
    cout<<100-a<<" "<<100-b<<" "<<100-(200-a-b)<<" "<<(100-a)*(100-b)<<" ";
    cout<<(100-a)*(100-b)/100<<" "<<(100-a)*(100-b)%100<<"\n";
    if((100-a)*(100-b)<100)cout<<100-(200-a-b)<<" "<<(100-a)*(100-b);
    else cout<<(100-a)*(100-b)/100+(100-(200-a-b))<<" "<<(100-a)*(100-b)%100;
}