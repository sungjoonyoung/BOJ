#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;;i++){
        string str;
        getline(cin,str);
        if(cin.eof()){
            cout<<i;
            return 0;
        }
    }
}