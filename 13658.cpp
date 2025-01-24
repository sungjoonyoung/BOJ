#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        char N;
        string str;
        cin>>N>>str;
        if(N=='0' && str=="0")return 0;
        int count=0;
        bool key=0;
        for(int i=0;i<str.size();i++){
            if(str[i]==N)continue;
            else{
                if(str[i]!='0'){
                    cout<<str[i];
                    key=1;
                    count++;
                }
                else{
                    if(key)cout<<str[i];
                }
            }
        }
        if(count==0)cout<<"0";
        cout<<"\n";
    }
}