#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        int N;
        cin>>N;
        if(N==0)return 0;
        int before=-1;
        for(int i=0;i<N;i++){
            int in;
            cin>>in;
            if(before==in)continue;
            cout<<in<<" ";
            before=in;
        }
        cout<<"$\n";
    }
}