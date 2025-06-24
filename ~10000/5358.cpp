#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        string str;
        getline(cin,str);
        if(cin.eof())break;
        for(auto c:str){
            if(c=='e')cout<<"i";
            else if(c=='i')cout<<"e";
            else if(c=='E')cout<<"I";
            else if(c=='I')cout<<"E";
            else cout<<c;
        }
        cout<<"\n";
    }
}