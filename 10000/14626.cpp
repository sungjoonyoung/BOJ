#include<iostream>
using namespace std;
int main(void){
    string str;
    cin>>str;
    int answer=0;
    int odd;
    for(int i=0;i<str.size();i++){
        if(str[i]=='*')odd=(i%2==1);
        else if(i%2==0) answer+=str[i]-'0';
        else answer+=(str[i]-'0')*3;
    }
    answer%=10;
    for(int i=0;i<10;i++){
        answer+=(odd?(i*3):i);
        if(answer%10==0)cout<<i;
        answer-=(odd?(i*3):i);
    }
}