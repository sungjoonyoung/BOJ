#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    int a,b;
    a=b=0;
    for(int i=0;i<N;i++)for(int j=0;j<M;j++){
        char c;
        cin>>c;
        if(c=='0')a++;
        else b++;
    }
    cout<<min(a,b);
}