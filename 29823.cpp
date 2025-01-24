#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int ud,lr;
    ud=lr=0;
    int in;
    cin>>in;
    string str;
    cin>>str;
    for(auto c:str){
        if(c=='N')ud++;
        if(c=='S')ud--;
        if(c=='W')lr--;
        if(c=='E')lr++;
    }
    cout<<abs(ud)+abs(lr);
}