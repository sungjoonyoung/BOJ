#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int in;
        cin>>in;
        if(in>=5)for(int i=0;i<in/5;i++)cout<<"++++ ";
        if(in%5)for(int i=0;i<in%5;i++)cout<<"|";
        cout<<"\n";
    }
}