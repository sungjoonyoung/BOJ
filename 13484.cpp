#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int X;
    cin>>X;
    int N;
    cin>>N;
    int tmp=0;
    for(int i=0;i<N;i++){
        int in;
        cin>>in;
        tmp+=X;
        tmp-=in;
    }
    tmp+=X;
    cout<<tmp;
}