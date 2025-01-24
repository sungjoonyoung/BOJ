#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,C,E,AA,CC,EE;
    cin>>A>>C>>E>>AA>>CC>>EE;
    if(EE>=E){
        if(CC>=C){
            if(AA>=A)cout<<"A";
            else if(AA>=(A+1)/2)cout<<"B";
            else cout<<"C";
        }
        else if(CC>=(C+1)/2)cout<<"D";
        else cout<<"E";
    }
    else cout<<"E";
}