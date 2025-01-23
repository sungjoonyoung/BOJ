#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B,C,D,E;
    cin>>A>>B>>C>>D>>E;
    int answer=0;
    if(A<0){
        answer+=-A*C;
        A=0;
        answer+=D;
    }
    
    cout<<answer+E*(B-A);
}