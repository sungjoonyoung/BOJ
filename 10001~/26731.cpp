#include<iostream>
#include<string>
using namespace std;
int arr['z'-'a'+1];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    for(auto c:str)arr[c-'A']++;
    for(int i=0;i<'z'-'a'+1;i++)if(!arr[i])cout<<(char)(i+'A');
}