#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        ;
        int AA,BB,CC,DD;
        cin>>AA>>BB>>CC>>DD;
        A+=AA;
        B+=BB;
        C+=CC;
        D+=DD;
        A=max(1,A);
        B=max(1,B);
        C=max(0,C);
        cout<<A+B*5+C*2+D*2<<"\n";
    }
}