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
        int a,b;
        cin>>a>>b;
        for(int i=0;i<str.size();i++){
            if(!(a<=i and i<b))cout<<str[i];
        }
        cout<<"\n";
    }
}