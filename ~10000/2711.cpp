#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        string str;
        cin>>str;
        for(int i=0;i<str.size();i++){
            if(i==N-1)continue;
            cout<<str[i];
        }
        cout<<"\n";
    }
}