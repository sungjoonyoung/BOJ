#include<iostream>
#include<string>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        string a,b;
        cin>>a>>b;
        int count=0;
        for(int i=0;i<a.size();i++)count+=(a[i]!=b[i]);
        cout<<"Hamming distance is "<<count<<".\n";
    }
}