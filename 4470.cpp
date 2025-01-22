#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    cin.ignore();
    for(int i=1;i<=N;i++){
        string str;
        getline(cin,str);
        cout<<i<<". "<<str<<"\n";
    }
}