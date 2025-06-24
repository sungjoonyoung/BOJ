#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int outa=0;
    int answer=0;
    for(int i=0;i<4;i++){
        int in, out;
        cin>>out>>in;
        answer+=in;
        answer-=out;
        outa = max(outa,answer);
    }
    cout<<outa;
}