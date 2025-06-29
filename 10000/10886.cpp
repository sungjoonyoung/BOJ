#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    int count=0;
    cin>>N;
    for(int i=0;i<N;i++){
        int in;
        cin>>in;
        count+=in;
    }
    if(count<N-count)cout<<"Junhee is not cute!";
    else cout<<"Junhee is cute!";
}