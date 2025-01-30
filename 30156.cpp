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
        int a,b;
        cin>>str;
        a=b=0;
        for(auto c:str){
            if(c=='a')a++;
            else b++;
        }
        cout<<min(a,b)<<"\n";
    }
}