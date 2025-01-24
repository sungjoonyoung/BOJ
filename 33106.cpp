#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        string str;
        cin>>str;
        for(int i=0;i<str.size();i++){
            if(str[i]=='c'){
                if(i==str.size()-1)cout<<"k";
                else if(str[i+1]=='e'||str[i+1]=='i'||str[i+1]=='y')cout<<"s";
                else if(str[i+1]=='a'||str[i+1]=='o'||str[i+1]=='u')cout<<"k";
                else if(str[i+1]=='h'){
                    cout<<"c";
                    i++;
                }
                else cout<<"k";
            }
            else cout<<str[i];
        }
        cout<<"\n";
    }
}