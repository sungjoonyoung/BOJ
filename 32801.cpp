#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,a,b;
    cin>>N>>a>>b;
    int FB,F,B;
    FB=F=B=0;
    for(int i=1;i<=N;i++){
        if(i%a==0 and i%b==0)FB++;
        else if(i%a==0)F++;
        else if(i%b==0)B++;
    }
    cout<<F<<" "<<B<<" "<<FB;
}