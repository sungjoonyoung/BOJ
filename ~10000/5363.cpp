#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    cin.ignore();
    while(N--){
        string str;
        getline(cin,str);
        int count=0;
        int ind=0;
        for(int i=0;i<str.size();i++){
            if(str[i]==' ' && count<2){
                count++;
                if(count==2){
                    ind=i;
                    continue;
                }
            }
            if(ind)cout<<str[i];
        }
        cout<<" ";
        for(int i=0;i<ind;i++)cout<<str[i];
        cout<<"\n";
    }
}