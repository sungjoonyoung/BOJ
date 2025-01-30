#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;cin>>str;
    int answer=0;
    for(auto c:str){
        if(c=='j' or c=='i')answer+=2;
        else answer++;
    }
    cout<<answer;
}