#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int answer=0;
    string str;
    cin>>str;
    for(int i=0;i<str.size()-3;i++){
        if(str[i]=='D' and str[i+1]=='K' and str[i+2]=='S' and str[i+3]=='H')answer++;
    } 
    cout<<answer;
}