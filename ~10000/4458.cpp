#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    cin.ignore();
    while(N--){
        string str;
        getline(cin,str);
        if('a'<=str[0] and str[0]<='z')str[0]=str[0]+'A'-'a';
        cout<<str<<"\n";
    }
}