#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    if(str=="1")cout<<"1";
    else if(str=="12")cout<<"2";
    else if(str=="123")cout<<"3";
    else if(str=="1234")cout<<"4";
    else if(str=="12345")cout<<"5";
    else if(str=="123456")cout<<"6";
    else if(str=="1234567")cout<<"7";
    else if(str=="12345678")cout<<"8";
    else if(str=="123456789")cout<<"9";
    else if(str=="12345678910")cout<<"10";
    else cout<<-1;
}