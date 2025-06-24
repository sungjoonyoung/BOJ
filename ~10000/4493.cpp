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
        int N;
        cin>>N;
        while(N--){
            char x,y;
            cin>>x>>y;
            if(x==y)continue;
            else if(x=='R' and y=='S')a++;
            else if(x=='S' and y=='P')a++;
            else if(x=='P' and y=='R')a++;
            else b++;
        }
        if(a>b)cout<<"Player 1\n";
        else if(a<b)cout<<"Player 2\n";
        else cout<<"TIE\n";
    }
}