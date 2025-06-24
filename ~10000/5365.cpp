#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    int before=1;
    for(int i=0;i<N;i++){
        string str;
        cin>>str;
        if(str.size()<=before-1)cout<<" ";
        else cout<<str[before-1];
        before=str.size();
    }
}