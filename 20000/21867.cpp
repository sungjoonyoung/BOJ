#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string str;
    cin>>str;
    int count=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='A'||str[i]=='J'||str[i]=='V'){
            count++;
            continue;
        }
        cout<<str[i];
    }
    if(count==str.size())cout<<"nojava";
}