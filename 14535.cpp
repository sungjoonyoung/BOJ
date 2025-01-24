#include<iostream>
#include<string>
using namespace std;
int mon[13];
string monstring[13]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int count=0;
    while(1){
        count++;
        int N;
        cin>>N;
        if(N==0)return 0;
        cout<<"Case #"<<count<<":\n";
        for(int i=0;i<N;i++){
            int D,M,Y;
            cin>>D>>M>>Y;
            mon[M]++;
        }
        for(int i=0;i<12;i++){
            cout<<monstring[i]<<":";
            if(mon[i+1])for(int j=0;j<mon[i+1];j++)cout<<"*";
            cout<<"\n";
        }
        fill(mon,mon+13,0);
    }
}