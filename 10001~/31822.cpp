#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    int N;
    cin>>N;
    int count=0;
    while(N--){
        [&](){
            string s;
            cin>>s;
            for(int i=0;i<5;i++){
                if(s[i]!=str[i])return;
            }
            count++;
        }();
    }
    cout<<count;
}