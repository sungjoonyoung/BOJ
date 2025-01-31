#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        cout<<"String #"<<i<<"\n";
        string str;
        cin>>str;
        for(auto c:str){
            if(c=='Z')cout<<"A";
            else cout<<(char)(c+1);
        }
        cout<<"\n\n";
    }    
}