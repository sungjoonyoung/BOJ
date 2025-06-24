#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int e,o;
        e=o=0;
        int N;
        cin>>N;
        while(N--){
            int in;
            cin>>in;
            if(in%2)o+=in;
            else e+=in;
        }
        if(e>o)cout<<"EVEN";
        else if(e<o)cout<<"ODD";
        else cout<<"TIE";
        cout<<"\n";
    }
}