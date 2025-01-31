#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++){
        cout<<str[i];
        if(i!=0 and (i+1)%10==0)cout<<"\n";
    }
}