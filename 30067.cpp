#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int sum=0;
    for(int i=0;i<10;i++){
        int in;
        cin>>in;
        sum+=in;
    }
    cout<<sum/2;
}