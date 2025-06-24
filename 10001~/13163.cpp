#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    cin.ignore();
    while(T--){
        string str;
        getline(cin,str);
        int ind=0;
        for(int i=0;i<str.size();i++)if(str[i]==' '){ind=i;break;};
        cout<<"god";
        for(int i=ind;i<str.size();i++){
            if(str[i]==' ')continue;
            cout<<str[i];
        }
        cout<<"\n";
    }
}