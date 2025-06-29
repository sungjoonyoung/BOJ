#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x,y;
    x=y=0;
    string str;
    cin>>str;
    for(auto c:str){
        if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u'){
            x++;
            y++;
        }
        if(c=='y')y++;
    }
    cout<<x<<" "<<y;
}