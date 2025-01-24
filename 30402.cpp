#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    for(int i=0;i<15;i++)for(int j=0;j<15;j++){
        cin>>str;
        if(str=="w"){
            cout<<"chunbae";
            return 0;
        }
        if(str=="b"){
            cout<<"nabi";
            return 0;
        }
        if(str=="g"){
            cout<<"yeongcheol";
            return 0;
        }
    }
}