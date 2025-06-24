#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    cin>>str;
    if(str.size()<=2){
        cout<<"No";
        return 0;
    }
    else for(int i=0;i<str.size()-2;i++){
        if(str[i]==str[i+1] and str[i+1]==str[i+2] and str[i]=='o'){
            cout<<"Yes";
            return 0;
        }

    }
    cout<<"No";
}