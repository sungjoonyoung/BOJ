#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int A,B,C;
        cin>>A>>B>>C;
        cout<<"Data set: "<<A<<" "<<B<<" "<<C<<"\n";
        while(C--){
            if(A>B)A/=2;
            else B/=2;
        }
        cout<<max(A,B)<<" "<<min(A,B)<<"\n\n";
    }
}