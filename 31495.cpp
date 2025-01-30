#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    getline(cin,str);
    if(str.size()>2 and str.front()=='"' and str.back()=='"'){
       for(int i=1;i<str.size()-1;i++)cout<<str[i]; 
    }
    else cout<<"CE";
}