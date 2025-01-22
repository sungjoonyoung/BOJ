#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str1,str2;
    cin>>str1>>str2;
    for(int i=0;i<str1.size();i++){
        cout<<max(str1[i],str2[i]);
    }
}