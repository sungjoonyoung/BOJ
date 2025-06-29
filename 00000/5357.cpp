#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        string str;
        cin>>str;
        char before=-1;
        for(auto c:str){
            if(c!=before)cout<<c;
            before=c;
        }
        cout<<"\n";
    }
}