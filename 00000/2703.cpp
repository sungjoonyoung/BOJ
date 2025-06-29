#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    char c;
    while(N--){
        cin.ignore();
        string table;
        string am;
        getline(cin,table);
        cin>>am;
        for(auto c:table){
            if(c==' ')cout<<" ";
            else{
                cout<<am[c-'A'];
            }
        }
        cout<<"\n";
    }
}