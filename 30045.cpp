#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    int count=0;
    while(T--){
        string str;
        cin>>str;
        if(str.size()==1)continue;
        for(int i=0;i<str.size()-1;i++){
            if(str[i]=='0' and str[i+1]=='1'){
                count++;
                break;
            }
            if(str[i]=='O' and str[i+1]=='I'){
                count++;
                break;
            }
        }
    }
    cout<<count;
}