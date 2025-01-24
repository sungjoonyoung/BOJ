#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    if(str=="fdsajkl;" or str=="jkl;fdsa")cout<<"in-out";
    else if(str=="asdf;lkj" or str==";lkjasdf")cout<<"out-in";
    else if(str=="asdfjkl;")cout<<"stairs";
    else if(str==";lkjfdsa")cout<<"reverse";
    else cout<<"molu";
}