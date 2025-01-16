#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    for(int i=0;i<N;i++){
        string str;
        cin>>str;
        for(int j=0;j<N;j++){
            if(M==1){
                if(str[j]=='d')cout<<"q";
                else if(str[j]=='b')cout<<"p";
                else if(str[j]=='p')cout<<"b";
                else if(str[j]=='q')cout<<"d";
                
            }
            else{
                if(str[j]=='d')cout<<"b";
                else if(str[j]=='b')cout<<"d";
                else if(str[j]=='p')cout<<"q";
                else if(str[j]=='q')cout<<"p";
            }
        }
        cout<<"\n";
    }
}