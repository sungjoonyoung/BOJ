#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B,C,AA,BB,CC;
    cin>>A>>B>>C>>AA>>BB>>CC;
    A=A*3+B*2+C;
    AA=AA*3+BB*2+CC;
    if(A<AA)cout<<"B";
    else if(A>AA)cout<<"A";
    else cout<<"T";
}