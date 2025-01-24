#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        cout<<"Denominations: ";
        int before=0;
        int key=0;
        for(int i=0;i<N;i++){
            int in;
            cin>>in;
            cout<<in<<" ";
            if(before*2>in)key=1;
            before=in;
        }
        cout<<"\n";
        if(key)cout<<"Bad coin denominations!";
        else cout<<"Good coin denominations!";
        cout<<"\n\n";
    }
}