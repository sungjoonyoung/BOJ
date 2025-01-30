#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    cin>>str;
    if(str.back()=='G')str.pop_back();
    else str.push_back('G');
    cout<<str;
}