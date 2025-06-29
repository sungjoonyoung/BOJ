#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a,b,o;
    cin>>a>>o>>b;
    if(o=="*"){
        cout<<"1";
        int tmp=(a.size()-1)+(b.size()-1);
        while(tmp--)cout<<"0";
    }
    else{
        if(a.size()==b.size()){
            cout<<"2";
            int tmp=a.size()-1;
            while(tmp--)cout<<"0";
        }
        else{
            cout<<"1";
            for(int i=0;i<max(a.size(),b.size())-min(a.size(),b.size())-1;i++)cout<<"0";
            int tmp=min(a.size(),b.size())-1;
            cout<<"1";
            while(tmp--)cout<<"0";
        }
    }
}