#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B,C;
    cin>>A>>B>>C;
    int min=(A+B+C)/3;
    if(B<min)cout<<(min-B)+(min-A)*2;
    else cout<<(B-min)+(C-min)*2;
}