#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str>>str;
    for(auto c:str){
        if('A'< c and c<'Z')cout<<(char)(c-'A'+'a');
        else cout<<(char)(c-'a'+'A');
    }
}