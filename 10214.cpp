#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int a,b;
        a=b=0;
        for(int i=0;i<9;i++){
            int x,y;
            cin>>x>>y;
            a+=x;
            b+=y;
        }
        if(a>b)cout<<"Yonsei\n";
        else if(a<b)cout<<"Korea\n";
        else cout<<"Draw\n";
    }
}