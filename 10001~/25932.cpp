#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    while(N--){
        int z,m;
        z=m=0;
        for(int i=0;i<10;i++){
            int in;
            cin>>in;
            if(in==18)m++;
            if(in==17)z++;
            cout<<in<<" ";
        }
        cout<<"\n";
        if(z==m and z)cout<<"both";
        else if(z)cout<<"zack";
        else if(m)cout<<"mack";
        else cout<<"none";
        cout<<"\n\n";
    }
}