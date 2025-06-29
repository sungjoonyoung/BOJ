#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    int answer=0;
    int tmp=0;
    for(int i=0;i<N;i++){
        int in;
        cin>>in;
        if(in)tmp++;
        else tmp=0;
        answer+=tmp;
    }
    cout<<answer;
}