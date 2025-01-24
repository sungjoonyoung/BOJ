#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    int answer=0;
    for(int i=0;i<N;i++){
        int in;
        cin>>in;
        answer+=in;
    }
    answer+=(N-1)*8;
    cout<<answer/24<<" "<<answer%24;
}