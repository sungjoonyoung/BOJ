#include<iostream>
#include<string>
using namespace std;
bool isP(char x){
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')return 1;
    return 0;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    int tmp=-1;
    for(int i=0;i<str.size();i++){
        if(tmp==-1){
            if(isP(str[i]))tmp=1;
            else tmp=0;
        }
        else if(tmp==0){
            if(isP(str[i]))tmp=1;
            else{
                cout<<0;
                return 0;
            }
        }
        else if(tmp==1){
            if(isP(str[i])==0)tmp=0;
            else{
                cout<<0;
                return 0;
            }
        }
    }
    cout<<1;
}