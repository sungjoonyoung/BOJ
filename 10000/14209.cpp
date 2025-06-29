#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    long long answer=0;
    while(T--){
        string str;
        cin>>str;
        for(auto c:str){
            if(c=='A')answer+=4;
            if(c=='K')answer+=3;
            if(c=='Q')answer+=2;
            if(c=='J')answer+=1;
        }
    }
    cout<<answer;
}