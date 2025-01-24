#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    for(int i=0;i<3;i++){
        int key=1;
        for(int j=0;j<N;j++){
            int in;
            cin>>in;
            if(in==7)key=0;
        }
        if(key){
            cout<<0;
            return 0;
        }
    }
    cout<<"777";
}