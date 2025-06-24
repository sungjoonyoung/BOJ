#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B;
    A=B=0;
    string str;
    cin>>str;
    int t=0;
    for(int i=0;i<str.size();i+=2){
        if(str[i]=='A')A+=str[i+1]-'0';
        else B+=str[i+1]-'0';

        if(t){
            if(abs(A-B)>=2){
                cout<<str[i];
                return 0;
            }
        }
        else{
            if(A==10 and B==10){
                t=1;
                continue;
            }
            if(A>10){
                cout<<"A";
                return 0;
            }
            if(B>10){
                cout<<"B";
                return 0;
            }
            
        }
    }
}