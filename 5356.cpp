#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int N;
        char c;
        cin>>N>>c;
        for(int i=1;i<=N;i++){
            for(int j=0;j<i;j++)cout<<c;
            cout<<"\n";
            if(c=='Z')c='A';
            else c++;
        }
        cout<<"\n";
    }
}