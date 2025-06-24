#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int count=1;
    while(count){
        int a,b;
        cin>>a>>b;
        if(a==0&&b==0)return 0;
        cout<<"Hole #"<<count<<"\n";
        if(b==1)cout<<"Hole-in-one.\n\n";
        else if(a==b)cout<<"Par.\n\n"; 
        else if(a-b==1)cout<<"Birdie.\n\n"; 
        else if(a-b==-1)cout<<"Bogey.\n\n"; 
        else if(a-b==2)cout<<"Eagle.\n\n"; 
        else if(a-b==3)cout<<"Double eagle.\n\n"; 
        else if(a-b<=-2)cout<<"Double Bogey.\n\n"; 

        count++;
    }
}