#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int in;
    cin>>in;
    for(int i=0;i<in+2;i++)cout<<"@";
    cout<<"\n";
    for(int i=0;i<in;i++){
        cout<<"@";
        for(int j=0;j<in;j++)cout<<" ";
        cout<<"@\n";
    }
    for(int i=0;i<in+2;i++)cout<<"@";
}