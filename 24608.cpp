#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    getline(cin,str);
    int answer=0;
    for(auto c:str)answer+=c;
    answer/=str.size();
    cout<<(char)answer;
}