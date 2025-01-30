#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int key=0;
    for(int k=1;k<=5;k++){
        string str;
        cin>>str;
        if(str.size()<3)continue;
        for(int i=0;i<str.size()-2;i++){
            if(str[i]=='F' and str[i+1]=='B' and str[i+2]=='I'){
                cout<<k<<" ";
                key=1;
                break;
            }
        }
    }
    if(!key)cout<<"HE GOT AWAY!";
}