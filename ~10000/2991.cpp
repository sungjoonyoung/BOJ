#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    for(int i=0;i<3;i++){
        int in;
        cin>>in;
        int count=0;
        if(0<in%(A+B) and in%(A+B)<=A)count++;
        if(0<in%(C+D) and in%(C+D)<=C)count++;
        cout<<count<<"\n";
    }
}