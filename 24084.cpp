#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    string str;
    cin>>str;
    for(int i=1;i<N;i++)if(str[i]=='J')cout<<str[i-1]<<"\n";
}