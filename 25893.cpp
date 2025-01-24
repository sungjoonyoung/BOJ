#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    while(N--){
        int z=0;
        for(int i=0;i<3;i++){
            int in;
            cin>>in;
            if(in>=10)z++;
            cout<<in<<" ";
        }
        cout<<"\n";
        if(z==1)cout<<"double";
        else if(z==2)cout<<"double-double";
        else if(z==3)cout<<"triple-double";
        else cout<<"zilch";
        cout<<"\n\n";
    }
}