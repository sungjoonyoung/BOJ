#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        long double A,P1,R,P2;
        cin>>A>>P1>>R>>P2;
        if(A/P1<R*R*3.141592/P2)cout<<"Whole pizza\n";
        else cout<<"Slice of pizza\n";
    }
}